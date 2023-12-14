#include "lists.h"
/**
 * free_list - function that frees a list_t list.
 * @head: Linked list to free
 * Return: Nothing (void function)
 */
void free_list(list_t *head)
{
	list_t *temp = head;

	if (head == NULL)
	{
		return;
	}
	while (head->next != NULL)
	{
		temp = temp->next;
		free(head->str);
		free(head);
		head = temp;
	}
	free(head->str);
	free(head);
}
