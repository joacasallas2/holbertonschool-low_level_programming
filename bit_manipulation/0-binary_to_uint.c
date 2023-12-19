#include "main.h"
int _pow(int num, int exp);
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: Pointer to a string of 0 and 1 chars
 * Return: the converted number
 * or 0 if there is one or more chars in the string b
 * that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	int i, exp, sum, num, pow;

	if (*b == '\0' || b == NULL)
	{
		return (0);
	}
	exp = sum = num = pow = 0;
	for (i = strlen(b) - 1; i >= 0; i--)
	{
		if (b[i] < 48 || b[i] > 49)
		{
			return (0);
		}
		num = b[i] - 48;
		pow = _pow(2, exp);

		sum += num * pow;
		exp++;
	}
	return (sum);
}

/**
 * _pow - Function that raises a number to a power
 * @num: the number base
 * @exp: the power
 * Return: the result
 */
int _pow(int num, int exp)
{
	int res = num;

	if (exp == 0)
	{
		return (1);
	}
	if (exp == 1)
	{
		return (num);
	}
	while (exp > 1)
	{
		res *= num;
		exp--;
	}
	return (res);
}
