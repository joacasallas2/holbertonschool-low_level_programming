#include "lists.h"
/**
 * dlistint_len - function that returns the number of nodes in a linked list
 * @h: The linked list
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
