#include "lists.h"
/**
 * print_listint_safe - function that prints a listint_t linked list.
 * @head: The pointer to the linked list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *fast, *slow;
	int i = 0;

	fast = head;
	slow = head;

	if (head == NULL)
	{
		return (0);
	}
	while (slow != NULL || slow->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		i++;
		if (fast == NULL)
		{
			fast = head;
		}
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
		{
			printf("-> %d\n%d", slow->n, i);
			return (i);
		}
	}
	return (i);
}
