/**i
 * main - check the fibonacci_98 code
 *
 * Return: Always 0 (Success)
 */
void fibonacci_98(void);

int main(void)
{
	fibonacci_98();
	return (0);
}

/**
 * fibonacci_98 - program that prints the first 98 Fibonacci numbers
 * @c: The character to print
 * Return: void function
 */

int _putchar(char c);
void fibonacci_98(void)
{
	int k;
	unsigned long int i, j, res, number, expNumber;
	i = 0;
	j = 1;

	for (k = 1; k <= 98; k++)
	{
		if (k == 91) /* unsigned long int sizi limit */
		{
			i = i / 12; 
			j = j / 12;
		}
		res = i + j;
		i = j;
		j = res;
		number = res / 10;
		expNumber = 1;
		if (k > 90)
		{
			number = res * 10;
		}
		for (; number >= 1; expNumber *= 10)
		{
			number = number / 10;
		}
		for (; expNumber >= 1; expNumber /= 10)
		{
			if (k > 90)
			{ 
				_putchar('0' + (((res / expNumber) % 10) * 120) % 10);
			}
			else
			{
				_putchar('0' + (res / expNumber) % 10);
			}
		}
		if (k == 98)
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
