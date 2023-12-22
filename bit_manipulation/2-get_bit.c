#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n:  The number
 * @index: The index of the bit to get
 * Return: The value of the bit at index or -1 if an error ocurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	while (index > 0)
	{
		index--;
		n = n >> 1;
	}
	if (!n)
	{
		return (0);
	}
	if (1 & n == 1 || 1 & n == 0)
	{
		return (1 & n);
	}
	else
	{
		return (-1);
	}
}
