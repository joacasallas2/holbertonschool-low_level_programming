#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list.
 * @head: The pointer to the linked list
 * @index: the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp1 = *head, *temp2, *temp3;

	if (*head == NULL)
	{
		return (1);
	}
	if (index == 0)
	{
		if ((*head)->next == NULL)
		{
			free(*head);
			*head = NULL;
			return (1);
		}
		temp1 = (*head)->next;
		free(*head);
		*head = temp1;
		return (1);
	}
	while (index > 1)
	{
		if (temp1->next == NULL)
		{
			return (-1);
		}
		temp2 = temp1;
		temp1 = temp1->next;
		temp1->prev = temp2;
		index--;
	}
	temp2 = temp1;
	temp3 = temp1->next;
	temp1 = temp1->next->next;
	temp1->prev = temp2;
	temp2->next = temp1;
	free(temp3);
	return (1);
}
