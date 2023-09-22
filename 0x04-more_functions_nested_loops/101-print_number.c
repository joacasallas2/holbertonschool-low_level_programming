/**
  * print_number - unction that prints an integer.
  * where n is the number to print
  * @c: Character to print
  * Return: Nothing (void function)
  */
int _putchar(char c);

void print_number(int n)
{
	int expNumber, number;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	number = n / 10;
	expNumber = 1;
	for (; number >= 1; expNumber *= 10, number /= 10)
	{
	}
	for (; expNumber >= 1; expNumber /= 10)
	{
		_putchar('0' + (n / expNumber) % 10);
	}
}

