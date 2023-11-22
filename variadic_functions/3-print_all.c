#include "variadic_functions.h"

void func1(char s, va_list args);

/**
 * print_all - function that prints anything.
 * @format: list of types of arguments passed to the function
 * Return: Nothing (void function)
 */
void print_all(const char *const format, ...)
{
	va_list args;
	char buffer[BUFSIZ];
	int numArgs, i, j, flag = 0;
	char array[] = "cifs";

	va_start(args, format);
	numArgs = vsnprintf(buffer, BUFSIZ, format, args);

	i = 0;
	while (format[i])
	{
		j = 0;
		while (array[j])
		{
			if (format[i] == array[j])
			{
				func1(format[i], args);
				flag = 1;
			}
			if (flag == 1 && i != numArgs - 1)
			{
				printf(", ");
			}
			flag = 0;
			j++;
		}
		i++;
	}
	printf("\n");
}

/**
 * func1 - function that prints anything.
 * @s: format passed
 * @args: argument passed
 * Return: Nothing (void function)
 */
void func1(char s, va_list args)
{
	if (s == 'c')
		printf("%c", va_arg(args, int));
	else if (s == 'i')
		printf("%i", va_arg(args, int));
	else if (s == 'f')
		printf("%f", (double)va_arg(args, int));
	else if (s == 's')
		printf("%s", va_arg(args, char *));
}
