/**
 * _strstr - function that locates a substring.
 * @haystack: The pointer to the string
 * @needle: The pointer to the substring
 * Return: A pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, k, check;
	char *ptr = '\0';

	check = 0;

	for (i = 0; haystack[i]; i++)
	{
		if (haystack[i] == needle[0])
		{
			check = 1;
			ptr = &haystack[i];
		}
		for (k = i, j = 0; needle[j]; j++, k++)
		{
			if (haystack[k] != needle[j])
			{
				check = 0;
				ptr = '\0';
				break;
			}
		}
		if (check == 1)
		{
			return (ptr);
		}
	}
	return (ptr);
}
