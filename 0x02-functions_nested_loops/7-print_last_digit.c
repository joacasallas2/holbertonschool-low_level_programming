/**
  * print_last_digit - prints the last digit of a number
  * @i: The number to print the last digit
  * @c: The character to print
  * Return: the value of the last digit
  */
int _putchar(char c);

int print_last_digit(int i)
{
	int lastDigit;

	lastDigit = (i % 10);
	if (lastDigit < 0)
	{
		lastDigit = lastDigit * -1;
	}
	_putchar('0' + lastDigit);
	return (lastDigit);
}

