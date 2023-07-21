#include "hash_tables.h"

/**
 * key_index - a function that gives the index of a key
 * @key: key
 * @size: size of the array of the hash table
 *
 * Return: the index at which the key/value pair should be stored in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int index;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (0);
	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
		return (0);
	index = hash_djb2(key) % size;
	free(ht->array);
	free(ht);

	return (index);
}
