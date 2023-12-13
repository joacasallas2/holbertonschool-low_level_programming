#include "lists.h"
/**
 * list_len -  function that returns the number of elements
 * in a linked list_t list.
 * @h: The pointer to the single linked list
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	int i;

	if (h == NULL)
	{
		return (0);
	}
	i = 0;
	while (h->next)
	{
		h = h->next;
		i++;
	}
	i++;
	return (i);
}
