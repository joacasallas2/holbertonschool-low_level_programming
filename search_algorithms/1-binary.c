#include "search_algos.h"
/**
 * binary_search - function that searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: The pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: The value to search for
 * Return: the index where value is located
 * If value is not present in array or if array is NULL, return -1
 */
int binary_search(int *array, size_t size, int value)
{
	int min = 0, middle, max, i;

	max = (int)size - 1;
	middle = max / 2;

	if (array != NULL)
	{
		while (min <= max)
		{
			printf("Searching in array: ");
			for (i = min; i <= max; i++)
			{
				if (i > min)
					printf(", ");
				printf("%d", array[i]);
			}
			printf("\n");
			if (array[max] == value)
				return (max);
			if (array[min] == value)
				return (min);
			if (value < array[middle])
			{
				min = min;
				max = middle - 1;
			}
			else if (value > array[middle])
			{
				min = middle + 1;
				max = max;
			}
			else
			{
				min = middle;
				max = max;
			}
			middle = min + ((max - min) / 2);
		}
	}
	return (-1);
}
