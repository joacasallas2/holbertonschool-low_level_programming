#include "lists.h"
/**
 * delete_nodeint_at_index -  function that deletes the node at index index
 * of a linked list.
 * @head: The pointer to the linked list
 * @index: The node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *prev;
	unsigned int i;

	if (*head == NULL)
	{
		return ('\0');
	}
	temp = *head;
	prev = *head;
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	for (i = 0; i <= index; i++)
	{
		prev = temp;
		if (prev == NULL)
			break;
		temp = temp->next;
		if (i == index - 1)
		{
			prev->next = temp->next;
			free(temp);
			return (1);
		}
	}
	return (-1);
}
