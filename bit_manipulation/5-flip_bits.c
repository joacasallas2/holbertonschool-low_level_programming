#include "main.h"
int countSetBits(int n);
/**
 * flip_bits -  function that returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: The number
 * @m: The another number wanted
 * Return: The number of bits to flip to get the another number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (countSetBits(n ^ m));
}
/**
 * countSetBits - Function that count set bits.
 * @n: The number
 * Return: The number of bits counted
 */
int countSetBits(int n)
{
	int i = 0;

	while (n > 0)
	{
		i++;
		n = n & (n - 1);
	}
	return (i);
}
