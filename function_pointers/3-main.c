#include "3-calc.h"
/**
 * main - program that performs simple operations.
 * @argc: The number of the arguments
 * @argv: The pointer to the array of arguments
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int result;
	int (*fun_ptr)(int, int);
	char ops[] = "+-*/%";

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (*argv[2] == (ops[2]) || *argv[2] == (ops[3]))
	{
		if (*argv[3] == 48)
		{
			printf("Error\n");
			exit(100);
		}
	}
	fun_ptr = get_op_func(argv[2]);
	result = fun_ptr(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}
