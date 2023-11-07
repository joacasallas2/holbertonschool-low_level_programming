#include "main.h"
/**
 * array_range -  function that creates an array of integers
 * @min: start of the array
 * @max: end of the array
 * Return: The pointer to the newly created array
 * If min > max, return NULL
 */
int *array_range(int min, int max)
{
	int i;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}
	ptr = (int *)malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
