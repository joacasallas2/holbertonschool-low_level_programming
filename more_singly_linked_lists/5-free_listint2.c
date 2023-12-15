#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list.
 * @head: The pointer to the single list
 * The function sets the head to NULL
 * Return: Nothing (void function)
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (&(*head) == NULL || *head == NULL) 
	{
		return;
	}
	while ((*head)->next != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	free(*head);
	*head = NULL;
}
