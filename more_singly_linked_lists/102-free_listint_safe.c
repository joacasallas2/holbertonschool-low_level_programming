#include "lists.h"
/**
 * free_listint_safe - function that frees a listint_t list.
 * @h: The pointer to the linked list
 * Return:  the size of the list that was free’d
 * The function sets the head to NULL
 */
size_t free_listint_safe(listint_t **h)
{
	int i = 0;
	listint_t *temp;

	if (*h == NULL)
	{
		return (0);
	}
	while ((*h)->next != NULL)
	{
		temp = (*h)->next;
		free(*h);
		*h = temp;
		i++;
	}
	free(h);
	h = NULL;
	return (i);
}
