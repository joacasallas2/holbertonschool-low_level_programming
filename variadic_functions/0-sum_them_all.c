#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: The number of arguments that come
 * Return: Always 0 (Success)
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
