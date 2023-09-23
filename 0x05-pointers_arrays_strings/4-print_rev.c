/**
  * print_rev - function that prints a string, in reverse,
  * followed by a new line
  * s: The pointer to the string to prints
  * @c: The character to print
  * Return: Nothing (void function)
  */

int _putchar(char c);
void print_rev(char *s)
{
	int i, j;

	for (i = 0, j = 0; s[i] != '\0'; i++, j++)
	{
	}
	for (; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

