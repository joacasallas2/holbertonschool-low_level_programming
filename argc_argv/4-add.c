#include "main.h"
/**
 * main - program that adds positive numbers
 * @argc: The number of arguments
 * @argv: The pointer to the array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (_atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += _atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

/**
 * _atoi -  function that convert a string to an integer
 * @s: The Pointer to the string
 * Return: the number or 0 if are not numbers
 */
int _atoi(char *s)
{
	int i, index, len, mul, number, sign, found, maxReached;

	found = number = maxReached = 0;
	mul = sign = 1;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] < 48 || s[index] > 57)
			continue;
		else
		{
			found = 1;
			break;
		}
	}
	if (found == 0)
		return (0);
	if (index != 0)
		for (i = index; i >= 0; i--)
		{
			if (s[i] == '-')
				sign *= -1;
		}
	for (len = index; s[len] != '\0'; len++)
	{
		if (s[len] < 48 || s[len] > 57)
			break;
		if (mul == 1000000000)
		{
			maxReached = 1;
			break;
		}
		mul *= 10;
	}
	if (maxReached == 0)
		mul = mul / 10;
	for (; index <= len; index++, mul /= 10)
		number += (((s[index] - '0') * mul) * sign);
	return (number);
}
