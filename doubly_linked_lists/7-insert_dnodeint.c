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
	ins = malloc(sizeof(dlistint_t));
	if (ins == NULL)
	{
		return (NULL);
	}
	if (len == 0)
	{
		printf("I am here, beginning\n");
		ins = add_dnodeint(h, n);
		return (ins);
	}
	else if (len == idx)
	{
		printf("I am here, end\n");
		ins = add_dnodeint_end(h, n);
		return (ins);
	}
	else if (len > idx)
	{
		printf("I am here, middle\n");
		temp = *h;
		for (i = 0; i < idx - 1; i++)
		{
			temp = temp->next;
		}
		ins->n = n;
		ins->next = temp->next;
		ins->prev = temp;
		temp->next->prev = ins;
		temp->next = ins;
		return (ins);
	}
	else
		return (NULL);
}
