/**
 * print_number - function that prints an integer.
 * @c: The character to print
 * n: The number to print
 * Return: Nothing (void function)
 */
int _putchar(char c);

void print_number(int n)
{
	int number, div;
	
	number = n / 10;
	div = 1;

	if (n < 0)
	{
		number = number * -1;
	}
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (; number >= 1; number /= 10, div *= 10)
	{
	}
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	for (; div >= 1; div /= 10)
	{
		if (n / div < 1)
		{
			_putchar('0' + n);
		}
		_putchar('0' + (n / div) % 10);
	}
}
