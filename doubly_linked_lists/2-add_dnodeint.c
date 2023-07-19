#include "lists.h"

/**
 * add_dnodeint - adds anew node at the beginning of a dlistint_t list
 * @head: the given dlistint_t list
 * @n: integer number of the adding node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp, *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
	}
	else
	{
		temp = *head;
		new->next = temp;
		temp->prev = new;
		*head = new;
	}
	return (new);
}
