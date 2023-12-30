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
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		*head = (*head)->next;
	}
	else
	{
		while (index > 1)
		{
			if (temp == NULL)
			{
				return (-1);
			}
			temp = temp->next;
			index--;
		}
		temp->prev->next = temp->next;
		if (temp->next != NULL)
		{
			temp->next->prev = temp->prev;
		}
	}
	free(temp);
	return (1);
}
