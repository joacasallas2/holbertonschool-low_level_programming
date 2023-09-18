/**
  * print_line - function that draws a straight line in the terminal.
  *
  * @c: The character to print
  * Return: Nothing (void function)
  */

int _putchar(char c);

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n == 0)
		{
			continue;
		}
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}

