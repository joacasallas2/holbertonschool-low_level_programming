/**
  * string_toupper - function that changes all lowercase letters to uppercase.
  * @ptr: The pointer to the string
  * Return: A pointer to the resulting string
  */
char *string_toupper(char *ptr)
{
	int i;

	for (i = 0; ptr[i]; i++)
	{
		if (ptr[i] > 96 && ptr[i] < 123)
		{
			ptr[i] = ptr[i] - 32;
		}
	}
	return (ptr);
}

