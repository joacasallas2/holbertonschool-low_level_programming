#include "lists.h"
/**
 * free_listint_safe - function that frees a listint_t list.
 * @h: The pointer to the linked list
 * Return:  the size of the list that was free’d
 * The function sets the head to NULL
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *fast, *slow, *temp;
	int i = 0;

	fast = *h;
	slow = *h;

	if (*h == NULL)
	{
		return (0);
	}
	while (slow != NULL || slow->next != NULL)
	{
		i++;
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
		{
			return (i);
		}
		if (fast == NULL)
		{
			fast = *h;
		}
		temp = (*h)->next;
		free(*h);
		*h = temp;
	}
	return (i);
}
