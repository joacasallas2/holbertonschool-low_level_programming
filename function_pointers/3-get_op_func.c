#include "3-calc.h"
/**
 * get_op_func - function that selects the correct function
 * to perform the operation
 * @s: The operator passed as argument
 * Return: A pointer to the function that corresponds
 */
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
	    {"+", op_add},
	    {"-", op_sub},
	    {"*", op_mul},
	    {"/", op_div},
	    {"%", op_mod},
	    {NULL, NULL}};
	int i = 0;

	while (i < 5)
	{
		if (*s == *(ops[i].op))
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
