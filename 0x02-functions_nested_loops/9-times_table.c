/**
  * times_table - function that prints the 9 times table
  * @c: The character to print (putchar)
  * Return: void function
  */
int _putchar(char c);

void times_table(void)
{
	int i, j, result;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			result = i * j;
			if (result > 9)
			{
				_putchar(' ');
				_putchar('0' + result / 10);
				_putchar('0' + result % 10);
			}
			else if (j == 0)
			{
				_putchar('0');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + result);
			}
			if (j == 9)
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

