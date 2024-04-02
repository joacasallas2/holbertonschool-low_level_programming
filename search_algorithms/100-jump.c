#include "search_algos.h"
#include <math.h>

/**
 * jump_search - function that searches for a value in a sorted array
 * of integers using the Jump search algorithm
 * @array: The pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: the value to search for
 * Return:  the first index where value is located
 * If value is not present in array or if array is NULL,
 * your function must return -1
 */
int jump_search(int *array, size_t size, int value)
{
	int step = sqrt(size);
	int i, j, min = 0;

	if (array != NULL)
	{
		i = 0;
		while (i < (int)size)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			if (value > array[i])
			{
				min = i;
				i += step;
			}
			if (value <= array[i] || (value > array[i] && i >= (int)size))
			{
				printf("Value found between indexes [%d] and [%d]\n", min, i);
				for (j = min; j <= i && j < (int)size; j++)
				{
					printf("Value checked array[%d] = [%d]\n", j, array[j]);
					if (array[j] == value)
					{
						return (j);
					}
				}
				break;
			}
		}
	}
	return (-1);
}
