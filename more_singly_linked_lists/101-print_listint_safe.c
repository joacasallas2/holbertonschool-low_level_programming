#include "lists.h"
size_t listint_len(const listint_t *h);
/**
 * print_listint_safe - function that prints a listint_t linked list.
 * @head: The pointer to the linked list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	int i = 0;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		i++;
		head = head->next;
	};
	return (i);
}
