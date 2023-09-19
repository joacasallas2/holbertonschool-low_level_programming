/**
  * print_square - function that prints a square
  *
  * @c: The character to print
  * Return: Nothing (void function)
  */

int _putchar(char c);

void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

