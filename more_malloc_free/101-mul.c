#include "main.h"
int _atoi(char *s);
/**
 *  main - program that multiplies two positive numbers
 * @argc: The number of arguments
 * @argv: The pointer to the array of arguments
 * Return: the product result
 */
int main(int argc, char *argv[])
{
	int i, j;
	unsigned int result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < 3; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	result = _atoi(argv[1]) * _atoi(argv[2]);
	printf("%d\n", result);
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
