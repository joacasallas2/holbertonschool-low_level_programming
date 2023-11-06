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
	int *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
