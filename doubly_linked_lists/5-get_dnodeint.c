#include "lists.h"

/**
 * get_dnodeint_at_index - get the nth node of a dlistint_t linked list
 * @head: the given dlistint_t linked list
 * @index: the index of the node
 *
 * Return: the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	int flag = 0;
	unsigned int i = 0;
	dlistint_t *inode;

	inode = malloc(sizeof(dlistint_t));
	if (inode == NULL)
		return (NULL);
	while (head != NULL)
	{
		if (i == index)
		{
			flag++;
			inode->prev = head->prev;
			inode->n = head->n;
			inode->next = head->next;
		}
		head = head->next;
		i++;
	}
	if (flag > 0)
		return (inode);
	else
		return (NULL);
}
