#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: given hash table
 * @key: key, can not be empty
 * @valuse: a value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;

	if (key == NULL || ht == NULL)
		return (0);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(node);
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)/*array doesn't have such index element*/
	{
		ht->array[index]->key = strdup(key);
		ht->array[index]->value = strdup(value);
		ht->array[index]->next = NULL;
	}
	else if (strcmp(ht->array[index]->key, key) == 0)/*has same i&key node*/
		ht->array[index]->value = strdup(value);
	else /*array has same index but not same key node, add to before it*/
	{
		node = ht->array[index];
		ht->array[index]->key = strdup(key);
		ht->array[index]->value = strdup(value);
		ht->array[index]->next = node;
		free(node);
	}
	return (1);
}
