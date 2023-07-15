#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: the listint_t list
 *
 * Return: count of elements of list
 */
size_t listint_len(const listint_t *h)
{
	ssize_t count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
