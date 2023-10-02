/**
  * _puts - function that prints a string, followed by a new line, to stdout
  * @c: The character to print
  * str: The pointer to the string to print
  * Return: Nothing (void function)
  */
int _putchar(char c);

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

