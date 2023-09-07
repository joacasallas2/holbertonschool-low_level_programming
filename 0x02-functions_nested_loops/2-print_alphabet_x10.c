/**
  * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
  * @c: character to print 
  * Return: void
  */

int _putchar(char c);

void print_alphabet_x10(void)
{
	int i, j;

	for (j = 1; j > 0 && j < 11; j++)
	{
		for (i = 97; i > 96 && i < 123; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}

