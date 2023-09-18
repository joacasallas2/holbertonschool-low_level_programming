/**
  * print_most_numbers - function that prints the numbers, from 0 to 9
  * @c: The character to print
  * Return: Nothing (void function)
  */
int _putchar(char c);

void print_most_numbers(void)
{
	int i;

	for (i = 0; i >= 0 && i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		_putchar('0' + i);
	}
	_putchar('\n');
}
