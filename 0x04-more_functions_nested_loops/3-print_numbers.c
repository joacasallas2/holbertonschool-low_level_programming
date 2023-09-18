/**
  * print_numbers - Write a function that prints the numbers, from 0 to 9
  * @c: the character to print
  * Return: Nothing (void function)
  */
int _putchar(char c);

void print_numbers(void)
{
	int i;

	for (i = 0; i >= 0 && i <= 9; i++)
		_putchar('0' + i);
	_putchar('\n');
}
