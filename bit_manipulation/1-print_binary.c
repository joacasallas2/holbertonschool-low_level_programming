#include "main.h"
/**
 * print_binary - function that prints the binary representation of a number.
 * @n: the number
 * Return: Nothing (void function)
 */
void print_binary(unsigned long int n)
{
	unsigned long int num = 0, res = 0;

	if (n > 1)
	{
		print_binary(n >> 1);
	}
	if (n == 0)
	{
		printf("0");
		return;
	}
	if (n == 1)
	{
		printf("1");
		return;
	}
	while ((num * 2) < n)
	{
		if (((num + 1) * 2) > n)
		{
			break;
		}
		num++;
	}
	res = n - (num * 2);
	printf("%ld", res);
	n = num;
	num = 0;
}
