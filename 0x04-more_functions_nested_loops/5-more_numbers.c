/**
  * more_numbers - function that prints 10 times the numbers, from 0 to 14
  * @c: The character to print
  * Return: Nothing (void function)
  */
int _putchar(char c);

void more_numbers(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar('0' + j / 10);
				_putchar('0' + j % 10);
			}
			else
			{
				_putchar('0' + j);
			}
		}
		_putchar('\n');
	}
}

