#include "variadic_functions.h"
/**
 * print_strings - function that prints strings
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * Return: Nothing (void function)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *str;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
		{
			str = "(nil)";
		}
		if (separator == NULL || i == (n - 1))
		{
			printf("%s", str);
		}
		else
		{
			printf("%s%s", str, separator);
		}
	}
	printf("\n");
}
