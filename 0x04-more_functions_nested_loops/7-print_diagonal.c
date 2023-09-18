/**
  * print_diagonal - function that draws a diagonal line on the terminal.
  *
  * @c: The character to print
  * Return: Nothing (void function)
  */

int _putchar(char c);

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (j == i)
			{
				_putchar('\\');
			}
			if (j < i)
			{
				_putchar(' ');
			}
			else
			{
				continue;
			}
		}
		_putchar('\n');
	}
}

