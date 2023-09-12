
/**
 * main - check the fibonacci_50 code
 * @c: The character to print
 * Return: Always 0 (Success)
 */
int _putchar(char c);
void fibonacci_50(void);

int main(void)
{
	fibonacci_50();
	return (0);
}

/**
 * fibonacci_50 - program that prints the first 50 Fibonacci numbers
 * @c: The character to print
 * Return: void function
 */

void fibonacci_50(void)
{
	long int i, j, k, res, number, expNumber;

	i = 0;
	j = 1;

	for (k = 1; k <= 50; k++)
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
		if (k == 50)
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
