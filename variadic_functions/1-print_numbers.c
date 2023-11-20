#include "variadic_functions.h"
/**
 * print_numbers -  function that prints numbers
 * @separator: the string to be printed between numbers
 * @n: The number of integers passed to the function
 * Return: Nothing (void function)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		if (separator == NULL || i == (n - 1))
		{
			printf("%d", num);
		}
		else
		{
			printf("%d%s", num, separator);
		}
	}
	va_end(args);
	printf("\n");
}
