/**
  * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
  * @c: The character to print
  * Return: void
  */

int _putchar(char c);

void print_alphabet(void)
{
	int i;

	for (i = 97; i > 96 && i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
