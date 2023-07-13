#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: a pointer points list
 * @str: the string data will add to list.
 *
 * Return: A list_t type list.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *linkedlist;

	if (str == NULL)
		return (NULL);

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->str = strdup(str);
	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->len = strlen(str);
	newnode->next = NULL;

	if (*head == NULL)
		*head = newnode;
	else
	{
		linkedlist = *head;
		while (linkedlist->next != NULL)
			linkedlist = linkedlist->next;
		linkedlist->next = newnode;
	}
	return (newnode);
}
