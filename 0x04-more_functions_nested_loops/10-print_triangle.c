/**
  * print_triangle - function that prints a triangle
  * @c: The character to print
  * size is the size of the triangle
  * Return: Nothing (void function)
  */
int _putchar(char c);

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if (size - j >= i)
				_putchar(' ');
			else
				_putchar('#');
			if (j == size)
				_putchar('\n');
		}
	}
}

