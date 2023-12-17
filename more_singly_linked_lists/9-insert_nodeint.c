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

	if (*head == NULL)
	{
		*head = malloc(sizeof(listint_t));
		if (*head == NULL)
			return (NULL);
		(*head)->n = n;
		return (*head);
	}
	temp = *head;
	i = flag = 0;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	while (temp->next)
	{
		if (idx == 0)
		{
			new->next = *head;
			(*head) = new;
			return (new);
		}
		i++;
		if (idx == i)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		temp = temp->next;
	}
	return (NULL);
}
