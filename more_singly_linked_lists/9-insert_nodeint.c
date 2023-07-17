#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: the given linked list
 * @idx: the index of the list where the new node should be added
 * @n: the inset node integer value
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nodelist, *node;
	unsigned int i = 0;

	if (*head == NULL)
		return (NULL);
	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	if (idx == 0) /*node inserts in the beginning*/
	{
		node->n = n;
		node->next = *head;
		*head = node;
		return (node);
	}
	nodelist = *head;
	while (i < idx - 1 && nodelist != NULL)
	{
		nodelist = nodelist->next;
		i++;
	}
	if (i < idx - 1) /*idx is longer than nodelist length*/
		return (NULL);
	else
	{
		node->n = n;
		node->next = nodelist->next;
		nodelist->next = node;
		return (node);
	}
}
