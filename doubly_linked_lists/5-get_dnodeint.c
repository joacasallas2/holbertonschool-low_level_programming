#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a linked list.
 * @head: The linked list
 * @index: The index of the node to return
 * Return: The node indicated by the index or NUll if does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (head == NULL)
	{
		return (NULL);
	}
	while (index > 0)
	{
		if (head->next == NULL)
		{
			return (NULL);
		}
		head = head->next;
		index--;
		}
	return (head);
}
