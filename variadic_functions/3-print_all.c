#include "variadic_functions.h"

/**
 * print_all - function that prints anything.
 * @format: list of types of arguments passed to the function
 * Return: Nothing (void function)
 */

void print_all(const char *const format, ...)
{
	va_list args;
	char buffer[BUFSIZ];
	int i, numArgs;
	int (*fun_ptr)(va_list args);

	va_start(args, format);
	numArgs = vsnprintf(buffer, BUFSIZ, format, args);
	i = 0;
	while (format[i])
	{
		fun_ptr = get_op_func(format[i]);
		if (fun_ptr == NULL)
		{
			i++;
		}
		else
		{
			fun_ptr(args);
			if (i < numArgs - 1)
			{
				printf(", ");
			}
			i++;
		}
	}
	printf("\n");
}

/**
 * get_op_func - function that selects the correct function
 * @s: arguments passed to the function
 * Return: The pointer to the function
 */
int (*get_op_func(char s))(va_list args)
{
	op_t ops[] = {
	    {"c", getChar},
	    {"i", getInt},
	    {"f", getFloat},
	    {"s", getString},
	};
	int i = 0;

	while (i < 4)
	{
		if (*ops[i].op == s)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
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
	int element;

	element = va_arg(args, int);
	printf("%f", (double)element);
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
