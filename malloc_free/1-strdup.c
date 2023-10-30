#include "main.h"
/**
 * _strdup - function that returns a pointer to a newly allocated
 * space in memory
 * @str: The pointer to the string given
 * Return: pointer to the newly space allocated
 */
char *_strdup(char *str)
{
	int i;
	char *p;

	p = malloc(sizeof(*p));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		p[i] = str[i];
	}
	return (p);
}
