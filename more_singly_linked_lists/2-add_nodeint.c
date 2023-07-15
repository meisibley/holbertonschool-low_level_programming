#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: a new node will add the beginning of the list
 * @n: a listint_t struct integer value
 *
 * Return: The address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	if (head == NULL)
		return (NULL);
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (temp);
}
