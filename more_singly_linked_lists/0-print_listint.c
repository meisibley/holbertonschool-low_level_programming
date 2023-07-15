#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: a pointer points the list
 *
 * Return: The count of nodes
 */
size_t print_listint(const listint_t *h)
{
	ssize_t count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
