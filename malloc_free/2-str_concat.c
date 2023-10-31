#include "main.h"

/**
 * str_concat - function that concatenates two strings
 * @s1: the pointer to the first string
 * @s2: the pointer to the second string
 * Return: A pointer to the new space allocated with the string concatened
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *p;

	for (i = 0; s1[i]; i++)
	{
	}
	for (j = 0; s2[j]; j++)
	{
	}
	p = malloc(sizeof(char) * (i + j) + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; s2[j]; j++, i++)
	{
		p[i] = s2[j];
	}
	p[i] = '\0';
	return (p);
}
