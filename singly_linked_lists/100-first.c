#include "lists.h"
/**
 * first - function that prints a string before the main function is executed.
 * Return: Nothing (void function)
 */
void first(void) __attribute__((constructor));
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
