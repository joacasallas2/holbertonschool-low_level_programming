#include "lists.h"
/**
 * print_listint_safe - function that prints a listint_t linked list.
 * @head: The pointer to the linked list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp = head;
	int i = 0;

	while (temp->next != NULL)
	{
		printf("[%1p] %d\n", (void *)temp, temp->n);
		i++;
		temp = temp->next;
	}
	printf("[%7p] %d\n", (void *)temp, temp->n);
	return (i);
}
