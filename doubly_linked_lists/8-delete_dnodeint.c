#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list.
 * @head: The pointer to the linked list
 * @index: the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		if ((*head)->next == NULL)
		{
			*head = NULL;
			free(*head);
			return (1);
		}
		*head = (*head)->next;
		(*head)->prev = NULL;
		return (1);
	}
	while (index > 1)
	{
		if (temp == NULL)
		{
			return (-1);
		}
		temp = temp->next;
		index--;
	}
	temp->next = temp->next->next;
	temp->prev->next = temp->next;
	free(temp);
	return (1);
}
