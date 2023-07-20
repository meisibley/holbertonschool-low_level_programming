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
	dlistint_t *temp;

	if (*head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		if ((*head)->next != NULL)
		{
			*head = (*head)->next;
			temp->next = NULL;
			free(temp);
			(*head)->prev = NULL;
			return (1);
		}
		else
		{
			*head = NULL;
			free(temp);
			return (-1);
		}
	}
	while (i < index && temp->next != NULL)
	{
		temp = temp->next;
		i++;
	}
	if (i < index) /*list is shorter than index number*/
	{
		return (-1);
	}
	temp->next = temp->next->next;
	temp->next->prev = temp;
	*head = temp;
	free(temp);
	return (1);
}
