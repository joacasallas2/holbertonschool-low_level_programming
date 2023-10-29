#include "main.h"
/**
 * create_array - function that creates an array of chars, and initializes
 * it with a specific char
 * @size: the lenght of the array
 * @c: The char to initialization
 * Return: A pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p = malloc(sizeof(char) * size);

	if (p == NULL || size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
