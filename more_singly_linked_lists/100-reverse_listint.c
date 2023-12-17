#include "lists.h"
/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: The pointer to the linked list
 * Return: A pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *current, *next;

	prev = NULL;
	current = *head;
	next = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
	return (*head);
}
