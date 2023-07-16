#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: a listint_t pointer point to the list
 *
 * Return: The head node's data
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	temp = *head;
	n = temp->n;
	temp = temp->next;
	free(*head);
	*head = temp;
	return (n);
}
