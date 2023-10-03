/**
  * cap_string -   function that capitalizes all words of a string.
  * @ptr: The pointer to the string
  * Return: A pointer to the resulting string dest
  */
char *cap_string(char *ptr)
{
	int i;

	for (i = 0; ptr[i]; i++)
	{
		if (ptr[i] == '\t')
		{
			continue;
		}
		if ((ptr[i - 1] == ' ') || (ptr[i - 1] == '\n') || (ptr[i - 1] == '.')
		|| (ptr[i - 1] == ',') || (ptr[i - 1] == ';') || (ptr[i - 1] == '!')
		|| (ptr[i - 1] == '?') || (ptr[i - 1] == '\"') || (ptr[i - 1] == '(')
		|| (ptr[i - 1] == ')') || (ptr[i - 1] == '{')  || (ptr[i - 1] == '}')
		|| (ptr[i - 1] == '\t') || (i == 0))
		{
			if (ptr[i] > 96 && ptr[i] < 123)
			{
				ptr[i] = ptr[i] - 32;
			}
		}
	}
	return (ptr);
}

