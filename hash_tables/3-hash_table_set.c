#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: given hash table
 * @key: key, can not be empty
 * @value: a value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node, *temp;

	if (key == NULL || ht == NULL)
		return (0);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(node);
		return (0);
	}
	node->key = strdup(key);
	node->value = strdup(value);
	index = key_index((const unsigned char *)(key), ht->size);
	if (ht->array[index] == NULL)/*array doesn't have such index element*/
	{
		node->next = NULL;
		ht->array[index] = node;
		free(node->key), free(node->value), free(node);
	}
	else /*array has same index have or have not same key, add at begn*/
	{
		temp = ht->array[index];
		node->next = temp;
		ht->array[index] = node;
		free(node->key), free(node->value), free(node);
	}
	return (1);
}
