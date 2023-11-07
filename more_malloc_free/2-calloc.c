#include "main.h"
/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: The number of elements of the array
 * @size: The number of bytes of each element
 * Return: A pointer to the allocated memory
 * The memory is set to zero
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *ptr;
	int *pi;
	char *pc;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
	{
		return (NULL);
	}
	pi = (int *)ptr;
	pc = (char *)ptr;
	for (i = 0; i < nmemb; i++)
	{
		pi[i] = 0;
		pc[i] = 0;
	}
	if (size == 1)
	{
		return (pc);
	}
	return (pi);
}
