#include "lists.h"
/**
 * listint_len - function that returns the number of elements
 * in a linked listint_t list.
 * @h: The pointer to the linked list
 * Return: the number of elements in a linked listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h->next != NULL)
	{
		i++;
		h = h->next;
	}
	i++;
	return (i);
}
