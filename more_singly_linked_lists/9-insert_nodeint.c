#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a new node
 * at a given position.
 * @head: The pointer to the linked list
 * @idx: The index
 * @n: the integer of the new node
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;
	unsigned int i;
	int flag;

	temp = *head;
	i = flag = 0;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	while (temp->next)
	{
		if (i == idx)
		{
			flag = 1;
			break;
		}
		temp = temp->next;
		i++;
	}
	if (flag == 0)
	{
		return (NULL);
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
