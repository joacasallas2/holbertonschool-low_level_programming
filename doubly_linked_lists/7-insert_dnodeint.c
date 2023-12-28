#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: The Pointer to the linked list
 * @idx: The index to insert the new node
 * @n: The data in the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp1, *temp2, *temp3, *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (*h == NULL)
	{
		*h = new;
		new->next = NULL;
		new->prev = NULL;
		return (new);
	}
	if (idx == 0)
	{
		add_dnodeint(h, n);
		return (*h);
	}
	temp1 = *h;
	while (idx > 1)
	{
		if (temp1->next == NULL)
		{
			return (NULL);
		}
		temp3 = temp1;
		temp1 = temp1->next;
		temp1->prev = temp3;
		idx--;
	}
	temp2 = temp1->next;
	temp3 = temp1;
	temp1->next = new;
	new->next = temp2;
	new->prev = temp3;
	return (new);
}
