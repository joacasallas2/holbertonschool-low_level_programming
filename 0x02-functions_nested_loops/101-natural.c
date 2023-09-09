/**
  * main - check the sumMul function
  * @c: The character to print
  * Return: Always 0 (Success)
  */
int _putchar(char c);
void sumMul(void);

int main(void)
{
	sumMul();
	_putchar('\n');
	return (0);
}


/**
  * sumMul - computes and prints the sum of all the multiples of 3 or 5
  * @c: The character to print
  * Return: void function
  */
void sumMul(void)
{
	int i, sum;

	sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
		{
			sum = sum + i;
		}
	}
	_putchar('0' + (sum / 100000));
	_putchar('0' + (sum / 10000) % 10);
	_putchar('0' + (sum / 1000) % 10);
	_putchar('0' + (sum / 100) % 10);
	_putchar('0' + (sum / 10) % 10);
	_putchar('0' + (sum % 10));
}

