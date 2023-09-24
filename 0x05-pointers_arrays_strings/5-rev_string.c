/**
  * rev_string - function that reverses a string.
  * @s: The pointer to string to reverse
  * Return: Nothing (void function)
  */

void rev_string(char *s)
{
	int i, j;
	char s2[256];

	for (i = 0; s[i] != '\0'; i++)
	{
		s2[i] = s[i];
	}
	i--;
	for (j = 0; i >= 0; j++, i--)
	{
		s[j] = s2[i];
	}
}

