#include "lists.h"
/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: The  pointer to the linked list
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h->next != NULL)
	{
		printf("[%d] ", h->len);
		if (h->str == NULL)
		{
			printf("nil\n");
		}
		else
		{
			printf("%s\n", h->str);
		}
		h = h->next;
		i++;
	}
	printf("[%d] %s\n", h->len, h->str);
	i++;
	return (i);
}
