#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a linked list
 * @head: The pointer to the linked list
 * Return: the head node’s data (n)
 * if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}
	i = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (i);
}
