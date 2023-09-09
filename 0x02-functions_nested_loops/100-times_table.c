/**
  * print_times_table - function that prints the n times table.
  * @c: The character to print
  * @n: The number of times table
  * Return: void function
  */
int _putchar(char c);

void print_times_table(int n)
{
	int i, j, result;

	if (n < 0 || n > 15)
	{
		return;
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				result = i * j;
				if (result == 0 && j == 0)
				{
					_putchar('0');
				}
				else if (result < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + result);
				}
				else if (result > 9 && result < 100)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + (result / 10));
					_putchar('0' + (result % 10));
				}
				else
				{
					_putchar(' ');
					_putchar('0' + (result / 100));
					_putchar('0' + (result / 10) % 10);
					_putchar('0' + (result % 10));
				}
				if (j == n)
				{
					_putchar('\n');
				}
				else
				{
					_putchar(',');
				}
			}
		}
	}
}
