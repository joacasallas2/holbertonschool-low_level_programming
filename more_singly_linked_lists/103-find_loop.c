#include "lists.h"
/**
 * find_listint_loop - function that finds the loop in a linked list.
 * @head: The pointer to the linked list
 * Return: The address of the node where the loop starts, or NULL
 * if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	if (head == NULL)
	{
		return (NULL);
	}
	slow = head;
	fast = head;
	while (head)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			return (slow);
		}
	}
	return (NULL);
}
