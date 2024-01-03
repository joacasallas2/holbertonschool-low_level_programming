#include "lists.h"
#include <unistd.h>

char *string_number(int n);
/**
 * main - Find and print the largest palindrome from product of two 3-digit
 * numbers.
 *
 * Return: the result
 */
int main(void)
{
	int res = 0, j, k, flag = 1;
	size_t len, len2, l;
	char *buffer;

	j = k = 999;
	for (; j > 99; j--)
	{
		for (; k > 99; k--)
		{
			res = j * k;
			buffer = string_number(res);
			len = strlen(buffer);
			len2 = len;
			for (l = 0; l < (len / 2) - 1; l++, len2--)
			{
				printf("j[%d] * k[%d] = res[%d], buffer[l] = [%c] y buffer[len -1] = [%c] \n", j, k, res, buffer[l], buffer[len - 1]);
				if (buffer[l] != buffer[len2 - 1])
				{
					flag = 0;
					free(buffer);
					break;
				}
			}
			if (flag == 1)
			{
				printf("palindrome is = %d", res);
				return (res);
			}
		}
		if (j > 100)
		{
			k = 999;
		}
	}
	printf("no found palindrome\n");
	return (0);
}

/**
 * string_number - function that prints an integer.
 * where n is the number to print
 * @n: Character to print
 * Return: string with the number
 */

char *string_number(int n)
{
	int expNumber, number, i;
	char *buffer;

	buffer = malloc(sizeof(char) * 9);
	if (buffer == NULL)
	{
		return (NULL);
	}
	number = n / 10;
	expNumber = 1;
	for (; number >= 1; expNumber *= 10, number /= 10)
	{
	}
	for (i = 0; expNumber >= 1; expNumber /= 10, i++)
	{
		buffer[i] = '0' + ((n / expNumber) % 10);
	}
	buffer[i] = '\0';
	return (buffer);
}
