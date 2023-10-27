int lenght(char *s);
int palindrome(char *s, int len);
/**
 * is_palindrome - function that returns 1 if a string
 * is a palindrome and 0 if not.
 * @s: The pointer to the string
 * Return: 1 if the string is a palindrome 0 if not
 */
int is_palindrome(char *s)
{
	int i, len;

	len = lenght(s);
	i = palindrome(s, len);

	return (i);
}

/**
 * palindrome - function that returns 1 if a string
 * is a palindrome and 0 if not.
 * @s: The pointer to the string
 * @len: the lenght of the string
 * len: the lenght of the string
 * Return: 1 if the string is a palindrome 0 if not
 */
int palindrome(char *s, int len)
{
	int i;

	i = 0;
	if (s[i] == '\0')
	{
		return (1);
	}
	if (s[i] != s[len - 1])
	{
		return (0);
	}
	return (palindrome(&s[i + 1], len - 2));
}

/**
 * lenght - function that calculates the lenght of a string
 * @s: The pointer to the string
 * Return: The lenght of the string
 */
int lenght(char *s)
{
	int i, len;

	i = len = 0;
	if (s[i] == '\0')
	{
		return (len);
	}
	return (1 + lenght(&s[i + 1]));
}
