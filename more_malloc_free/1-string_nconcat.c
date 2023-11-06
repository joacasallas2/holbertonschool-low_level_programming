#include "main.h"

/**
 * string_nconcat - function that concatenates two strings
 * @s1: The pointer to the first string
 * @s2: The pointer to the second string
 * @n: The number of bytes to copy from s2 to s1
 * Return: A pointer to the newly allocated space
 * with s1 and n bytes of s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *ptr;

	for (i = 0; s1[i]; i++)
	{
	}
	ptr = (char *)malloc(sizeof(char) * (i + n));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < n && s2[j]; i++, j++)
	{
		ptr[i] = s2[j];
	}
	ptr[i] = '\0';
	return (ptr);
}
