/**
 * _strcmp -  function that compares two strings
 * @s1: The pointer to the first string
 * @s2: The pointer to the second string
 * Return: 0 if the strings are equal
 */
int _strcmp(char *s1, char *s2)
{
	int i, sumS1, sumS2, res;

	i = sumS1 = sumS2 = 0;

	for (; s1[i]; i++)
	{
		sumS1 += s1[i];
		sumS2 += s2[i];
		res = sumS1 - sumS2;
		if (res != 0)
		{
			break;
		}
	}
	return (res);
}

