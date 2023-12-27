#include "lists.h"
/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: The linked list to free
 * Return: Nothing (void function)
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
