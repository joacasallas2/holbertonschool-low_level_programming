/**
  * puts2 - function that prints every other character of a string,
  * starting with the first character, followed by a new line.
  * str: The pointer to the string to print
  * @c: The character to print
  * Return: Nothing, (void function)
  */
int _putchar(char c);

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}

