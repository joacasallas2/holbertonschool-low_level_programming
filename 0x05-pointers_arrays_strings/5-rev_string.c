/**
  * rev_string - function that reverses a string.
  * @s: The pointer to string to reverse
  * Return: Nothing
  */
int _strlen(char *s);

void rev_string(char *s)
{
	int i, j;
	char *s2[_strlen(s)];

	for (i = 0, j = 0; s[i] != '\0'; i++, j++)
	{
	}
	for (i = 0; j >= 0; j--, i++)
	{
		*s[i] = s2[j];
	}
}


/**
 * _strlen - function that returns the length of a string.
 * @s: the string to return the length
 * Return: The length of a string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
}

