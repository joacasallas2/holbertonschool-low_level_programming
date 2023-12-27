#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a linked list
 * @head: Pointer to the linked list
 * @n: data in the new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(new));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (new);
}
