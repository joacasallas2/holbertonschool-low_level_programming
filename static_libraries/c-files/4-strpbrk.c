/**
 * _strpbrk -  function that searches a string for any of a set of bytes
 * @s: The string where to search
 * @accept: The substring to search
 * Return: A pointer to the byte in s that matches one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *ptr = '\0';

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
			{
				ptr = &s[i];
				return (ptr);
			}
		}
	}
	return (ptr);
}
