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
	unsigned int i = 0;
	dlistint_t *ins, *temp;

	ins = malloc(sizeof(dlistint_t));
	if (ins == NULL)
	{
		free(ins);
		return (NULL);
	}
	if (idx == 0)
	{
		ins->n = n, ins->prev = NULL;
		if (*h == NULL)
			ins->next = NULL, *h = ins;
		else
			temp = *h, ins->next = temp, temp->prev = ins, *h = ins;
		return (ins);
	}
	else
	{
		temp = *h;
		while (i < idx - 1)
		{
			if (i < idx && temp->next == NULL)
				return (NULL);
			temp = temp->next, i++;
		}
		if (temp->next == NULL && i == idx - 1)
		{
			ins->n = n, ins->next = NULL;
			ins->prev = temp, temp->next = ins;
			return (ins);
		}
		else
		{
			ins->n = n, ins->next = temp->next, temp->next->prev = ins;
			temp->next = ins, ins->prev = temp;
			return (ins);
		}
	}
}
