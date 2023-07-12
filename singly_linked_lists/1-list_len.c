#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: a pointer points this list
 *
 * Return: The length of this list
 */
size_t list_len(const list_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
