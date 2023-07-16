#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: listint_t list
 *
 * Return: no
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head != NULL)
	{
		temp = *head;
		while (head != NULL)
		{
			temp = temp->next;
			free(*head);
			*head = temp;
		}
		*head = NULL;
	}
}
