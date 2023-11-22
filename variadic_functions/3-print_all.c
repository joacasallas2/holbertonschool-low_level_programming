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
	int numArgs, i, j, result, flag = 0;
	char *resultString, array[] = "cifs";

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

				if (format[i] == 's')
				{
					if (args == NULL)
					{
						resultString = "(nill)";
					}
					else
					{
						resultString = va_arg(args, char *);
					}
					printf("%s", resultString);
				}
				else
				{
					result = va_arg(args, int);
					if (format[i] == 'f')
					{
						printf("%f", (double)result);
					}
					if (format[i] == 'i')
					{
						printf("%i", result);
					}
					if (format[i] == 'c')
					{
						printf("%c", result);
					}
				}
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
