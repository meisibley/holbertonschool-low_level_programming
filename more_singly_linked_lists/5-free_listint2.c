#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
		while (temp != NULL)
		{
			temp = temp->next;
			free(*head);
			*head = temp;
		}
		*head = NULL;
	}
}
