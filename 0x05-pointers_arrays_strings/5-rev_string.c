/**
  * rev_string - function that reverses a string.
  * @s: The pointer to string to reverse
  * Return: Nothing (void function)
  */

void rev_string(char *s)
{
	int i, large;
	char aux1, aux2;

	for (large = 0; s[large] != '\0'; large++)
	{
	}
	for (i = 0; i <= (large - 1) / 2; i++)
	{
		aux2 = s[i];
		aux1 = s[large - 1 - i];
		s[i] = aux1;
		s[large - (i + 1)] = aux2;
	}
}

