#include "variadic_functions.h"

/**
 * print_all - function that prints anything.
 * @format: list of types of arguments passed to the function
 * Return: Nothing (void function)
 */

void print_all(const char *const format, ...)
{
	va_list args;
	int i, j;
	char *separator = "";
	op_t ops[] = {
	    {"c", getChar},
	    {"i", getInt},
	    {"f", getFloat},
	    {"s", getString},
	};

	va_start(args, format);
	i = 0;
	while (format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (*ops[j].op != format[i])
			{
				j++;
				continue;
			}
			printf("%s", separator);
			separator = ", ";
			ops[j].f(args);
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}

/**
 * getChar - Function that prints a char
 * @args: The list of args to run
 * Return: Always 0 (Success)
 */
int getChar(va_list args)
{
	int element;

	element = va_arg(args, int);
	printf("%c", element);
	return (0);
}
/**
 * getInt - Function that prints an integer
 * @args: The list of args to run
 * Return: Always 0 (Success)
 */
int getInt(va_list args)
{
	int element;

	element = va_arg(args, int);
	printf("%i", element);
	return (0);
}
/**
 * getFloat - Function that prints a float
 * @args: The list of args to run
 * Return: Always 0 (Success)
 */
int getFloat(va_list args)
{
	float element;

	element = va_arg(args, double);
	printf("%f", element);
	return (0);
}
/**
 * getString - Function that prints a String
 * @args: The list of args to run
 * Return: Always 0 (Success)
 */
int getString(va_list args)
{
	char *elementString;

	elementString = va_arg(args, char *);
	if (elementString == NULL)
	{
		elementString = "(nil)";
	}
	printf("%s", elementString);
	return (0);
}
