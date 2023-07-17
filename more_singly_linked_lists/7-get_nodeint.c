#include "lists.h"

/**
 * get_nodeint_at_index - return the index node of a listint_t linked list
 * @head: the pointer points listint_t list
 * @index: the number of node
 *
 * Return: The nth node of a listint_t linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0, flag = 0;
	listint_t *node, *listnode;

	if (head == NULL)
		return (NULL);
	listnode = malloc(sizeof(listint_t));
	if (listnode == NULL)
	{
		free(listnode);
		return (NULL);
	}
	listnode = head;
	while (listnode != NULL)
	{
		if (i == index) /*found the node*/
		{
			node = listnode;
			flag++; /*flag changes value*/
		}
		i++;
		listnode = listnode->next;
	}
	free(listnode);
	if (flag == 0) /*the node does not exist*/
		return (NULL);
	return (node);
}
