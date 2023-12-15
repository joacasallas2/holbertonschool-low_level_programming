#include "lists.h"
/**
 * get_nodeint_at_index -  function that returns the nth node of a linked list.
 * @head: The pointer to the linked list
 * @index: The index of the node to return
 * Return: the nth node of a linked list
 * if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp)
	{
		if (i == index)
		{
			return (temp);
		}
		if (temp->next)
		{
			temp = temp->next;
			i++;
		}
		else
		{
			break;
		}
	}
	return (NULL);
}
