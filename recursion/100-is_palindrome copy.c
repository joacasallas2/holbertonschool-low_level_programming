#include <stdio.h>
/**
 * is_palindrome - function that returns 1 if a string
 * is a palindrome and 0 if not.
 * @s: The pointer to the string
 * Return: 1 if ths string is a palindrome 0 if not
 */
int is_palindrome(char *s)
{
	int i, len;

	for (i = len = 0; s[i] != '\0'; i++, len++)
	{
	}
	if (len <= 1)
	{
		return (1);
	}
	for (i = 0; (s[i] != '\0'); i++, len--)
	{
		if (s[i] != s[len - 1])
		{
			return (0);
		}
	}
	return (1);
}
