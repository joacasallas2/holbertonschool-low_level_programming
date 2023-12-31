#include "main.h"
/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr:  pointer to the memory previously allocated
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 * If new_size == old_size do not do anything and return ptr
 * If ptr is NULL, then the call is equivalent to malloc(new_size)
 * Return: A pointer to the new memory allocated
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptrChar = ptr;
	char *ptr2;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr2 = malloc(new_size);
		if (ptr2 == NULL)
		{
			free(ptr2);
			return (NULL);
		}
		return (ptr2);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	ptr2 = malloc(new_size);
	if (ptr2 == NULL)
	{
		free(ptr2);
		return (NULL);
	}
	for (i = 0; i < old_size; i++)
	{
		ptr2[i] = ptrChar[i];
	}
	free(ptr);
	return (ptr2);
}
