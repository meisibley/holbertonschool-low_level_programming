#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: given hash table
 *
 * Return: no
 */
void hash_table_print(const hash_table_t *ht)
{
	int comma = 0;
	unsigned long int i;
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return;
	if (ht != NULL && (ht->size > 0))
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i] != NULL)
			{
				if (comma != 0)
					printf(", ");
				node = ht->array[i];
				while (node != NULL)
				{
					printf("\'%s\': \'%s'", node->key, node->value);
					if (node->next != NULL)
						printf(", ");
					node = node->next;
					comma = 1;
				}
			}
		}
		printf("}\n");
	}
	free(node);
}
