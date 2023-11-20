#include "function_pointers.h"
/**
 * main - program that prints the opcodes of its own main function.
 * @argc: The number of arguments
 * @argv: The pointer to the array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;
	char *fun_ptr = (char *)&main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < atoi(argv[1]); i++)
	{
		printf("%.2hhx", fun_ptr[i]);
		if (i < (atoi(argv[1])) - 1)
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}
	}
	return (0);
}
