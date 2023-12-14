#include "lists.h"
/**
 * free_listint - function that frees a listint_t list.
 * @head: The pointer to the linked list
 * Return: Nothing (void function)
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}
	while (head->next != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	free(head);
}
