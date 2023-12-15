#include "lists.h"
/**
 * sum_listint - function that returns the sum of all the data (n)
 * of a linked list.
 * @head: The pointer to the linked list
 * Return: The sum of all the data (n) of a linked list.
 * if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum = sum + head->n;
		if (head->next)
		{
			head = head->next;
		}
		else
		{
			break;
		}
	}
	return (sum);
}
