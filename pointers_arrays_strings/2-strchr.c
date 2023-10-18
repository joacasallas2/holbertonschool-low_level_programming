/**
 * _strchr - function that locates a character in a string
 * @s: The string
 * @c: The character to locate
 * Return: A pointer to the first occurrence of the
 * character c in the string s
 * Return Null if the character is not found
 */

char *_strchr(char *s, char c)
{
	int i;
	char *ptr;

	for (i = 0; s[i] || s[i] == '\0'; i++)
	{
		if (s[i] == c)
		{
			ptr = &s[i];
			return (ptr);
		}
	}
	return ('\0');
}
