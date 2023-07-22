#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated
 * @ht: given has table
 * @key: key
 *
 * Return: the value associated with the element, or NULL if key coldn't found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t* node;

	if (ht == NULL || key == NULL)
		return (NULL);
	idx = key_index((const unsigned char *)(key), ht->size);
	node = ht->array[idx];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			if (node->value == NULL)
				return (NULL);
			else
				return (node->value);
		}
		else
			node = node->next;
	}
		return (NULL);
}
