#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: given dlistint_t linked list
 * @idx: index of the list where the new node should be added
 * @n: new node integer value
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int len = 0, i;
	dlistint_t *ins, *temp;

	temp = *h;
	while (temp != NULL)
	{
		temp = temp->next;
		len++;
	}
	temp = *h;
	if (idx == 0)
	{
		ins = add_dnodeint(&temp, n);
		return (ins);
	}
	else if (len == idx + 1)
	{
		ins = add_dnodeint_end(&temp, n);
		return (ins);
	}
	else if (len > idx)
	{
		temp = *h;
		ins = malloc(sizeof(dlistint_t));
		if (ins == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < idx - 1; i++)
			temp = temp->next;
		ins->n = n;
		ins->next = temp->next;
		temp->next->prev = ins;
		temp->next = ins;
		ins->prev = temp;
		return (ins);
	}
	else
	{
		return (NULL);
	}
}
