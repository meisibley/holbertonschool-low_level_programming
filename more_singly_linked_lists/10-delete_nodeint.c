#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t list
 * @head: given listint_t linked list
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node, *nodelist;

	if (*head == NULL)
		return (-1);
	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		free(node);
		return (-1);
	}
	nodelist = *head;
	if (index == 0)
	{
		nodelist = (*head)->next;
		free(*head);
		*head = nodelist;
		return (1);
	}
	while (i < index && nodelist->next != NULL)
	{
		node = nodelist;
		nodelist = nodelist->next;
		i++;
	}
	if (i < index) /*list is shorter than index number*/
		return (-1);
	node->next = nodelist->next; /*node jump over nodelist*/
	free(nodelist);
	return (1);
}
