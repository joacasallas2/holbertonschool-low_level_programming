
/**
 * main - check the fibonacci_n code
 * @n: The number of terms to print
 *
 * Return: Always 0 (Success)
 */
void fibonacci_n(unsigned long int n);

int main(void)
{
	fibonacci_n(400);
	return (0);
}

/**
 * fibonacci_n - program that prints the first n Fibonacci numbers
 * @n: The number of terms to print
 * @c: The character to print
 * Return: void function
 */

int _putchar(char c);
void fibonacci_n(unsigned long int n)
{
	unsigned long int i, j, k, res, number, expNumber;

	i = 0;
	j = 1;

	if (n > 4000000)
	{
		return;
	}
	for (k = 1; k <= n; k++)
	{
		res = i + j;
		i = j;
		j = res;
		number = res / 10;
		expNumber = 1;
		for (; number >= 1; expNumber *= 10)
		{
			number = number / 10;
		}
		for (; expNumber >= 1; expNumber /= 10)
		{
			_putchar('0' + (res / expNumber) % 10);
		}
		if (k == n)
		{
			_putchar('\n');
		}
		else
		{
			_putchar(',');
			_putchar(' ');
		}
	}
}
