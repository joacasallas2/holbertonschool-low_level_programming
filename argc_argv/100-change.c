#include "main.h"
/**
 * main - program that prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: The number of arguments
 * @argv: The pointer to the array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, num = 0, change;
	int cents[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(argv[1]);
	if (change < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; change > 0; i++)
	{
		while (change - cents[i] >= 0)
		{
			change = change - cents[i];
			num++;
		}
	}
	printf("%d\n", num);
	return (0);
}
