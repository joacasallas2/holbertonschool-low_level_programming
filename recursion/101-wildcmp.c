/**
 * wildcmp -  function that compares two strings
 * @s1: The pointer to the first string
 * @s2: The pointer to the second string
 * Return: 1 if the strings can be considered identical, otherwise 0.
 */
int wildcmp(char *s1, char *s2)
{
	int i, j;

	for (i = 0; s1[i]; i++)
	{
	}
	for (j = 0; s2[j]; j++)
	{
	}
	for (; i >= 0 && j >= 0; i--, j--)
	{
		if (j == 0 && s2[j] == '*')
		{
			return (1);
		}
		while (s2[j] == '*')
		{
			j--;
		}
		if (s1[i] != s2[j])
		{
			if (s2[j + 1] != '*')
			{
				return (0);
			}
			for (; i >= 0; i--)
			{
				if (s1[i] == s2[j])
				{
					break;
				}
			}
			if (s1[i] == s2[j])
			{
				return (1);
			}
			return (0);
		}
	}
	return (1);
}
