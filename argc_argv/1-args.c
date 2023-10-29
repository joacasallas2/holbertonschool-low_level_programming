#include "main.h"
/**
 * main - program that prints the number of arguments passed into it
 * @argc: The number of arguments
 * @argv: The point to the array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	int i;

	for (i = 0; i < argc - 1; i++)
	{
	}
	printf("%d\n", i);
	return (0);
}
