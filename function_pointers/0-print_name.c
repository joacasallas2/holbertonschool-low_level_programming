#include "function_pointers.h"

/**
 * print_name - function that prints a name.
 * @name: The pointer to the name
 * @f: The pointer to the function
 * Return: Nothing (void function)
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
