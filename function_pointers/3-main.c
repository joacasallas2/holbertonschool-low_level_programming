#include "3-calc.h"
/**
 * main - program that performs simple operations.
 * @argc: The number of the arguments
 * @argv: The pointer to the array of arguments
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int result, n1, n2;
	char *o;
	int (*fun_ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	o = argv[2];
	fun_ptr = get_op_func(o);
	if (fun_ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*o == '/' || *o == '%') && n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = fun_ptr(n1, n2);
	printf("%d\n", result);
	return (0);
}
