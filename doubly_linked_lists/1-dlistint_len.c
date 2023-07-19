#include "lists.h"

/**
 * dlistint_len - count the number of elements in a linked dlinstint_t list
 * @h: the given dlistint_t list
 *
 * Return: count of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
