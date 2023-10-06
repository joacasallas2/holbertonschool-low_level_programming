/**
 * print_number - function that prints an integer.
 * @c: The character to print
 * n: The number to print
 * Return: Nothing (void function)
 */
int _putchar(char c);

void print_number(int n)
{
	int div, num, pendDiv, lastDigit;

	num = n / 10;
	pendDiv = 0;
	lastDigit = (n % 10);
	if (num < 0)
	{
		num = num * -1;
	}
	for (div = 1; (num / div) >= 1; div *= 10)
	{
		if (div == 100000000)
		{
			pendDiv = 1;
			break;
		}
	}
	if (pendDiv == 1)
	{
		n = n / 10;
	}
	for (; div >= 1; div /= 10)
	{
		if (n < 0)
		{
			_putchar('-');
			n = n * -1;
		}
		_putchar('0' + (n / div) % 10);
		if (n == 0)
		{
			return;
		}
	}
	if (pendDiv == 1)
	{
		if (lastDigit < 0)
		{
			lastDigit *= -1;
		}
		_putchar('0' + lastDigit);
	}
}
