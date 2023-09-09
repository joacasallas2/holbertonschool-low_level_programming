#include <stdlib.h>
/**
  * print_to_98 - prints all natural numbers from n to 98
  * @n: The number to start printing
  * @c: The character to print
  * Return: void function
  */
int _putchar(char c);

void print_to_98(int n)
{
	int i, j = 0;

	if (n < 99)
	{
		for (i = n; i < 99; i++)
		{
			if (i < 10)
			{
				if (i < 0)
				{
					j = i * -1;
					_putchar('-');
					if (j > 9)
					{
						_putchar('0' + j / 10);
						_putchar('0' + j % 10);
					}
					else
					{
					_putchar('0' + j);
					}
				}
				else
				{
					_putchar('0' + i);
				}
			}
			else
			{
				_putchar('0' + i / 10);
				_putchar('0' + i % 10);
			}
			if (i == 98)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	if (n > 98)
	{
		for (i = n; i > 97; i--)
		{
			if (i > 99)
			{
				_putchar('0' + i / 100);
				_putchar('0' + ((i / 10) % 10));
				_putchar('0' + (i % 10));
			}
			else
			{
				_putchar('0' + i / 10);
				_putchar('0' + i % 10);
			}
			if (i == 98)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
