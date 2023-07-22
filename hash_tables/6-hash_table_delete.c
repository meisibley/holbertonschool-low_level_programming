#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: given hash table
 *
 * Return: no
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *temp;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (node->value != NULL)
				free(node->value);
			if (node->key != NULL)
				free(node->key);
			temp = node->next;
			free(node);
			node = temp;
		}
	}
	free(ht->array);
	free(ht);
}
