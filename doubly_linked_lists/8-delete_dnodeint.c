#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 * @head: given linked list
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp, *out;

	if (*head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		if ((*head)->next != NULL)
			(*head)->next->prev = NULL;
		*head = (*head)->next;
		return (1);
	}
	while (i < index - 1)
	{
		if (i < index && temp->next == NULL)
			return (-1);
		temp = temp->next;
		i++;
	}
	out = temp->next;
	if (out->next != NULL)
	{
		temp->next = out->next;
		out->next->prev = temp;
		free(out);
	}
	else
	{
		temp->next = NULL;
		free(out);
	}
	return (1);
}
