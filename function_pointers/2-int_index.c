#include "function_pointers.h"
/**
 * int_index -  function that searches for an integer.
 * @array: The pointer to the array
 * @size: The number of elements in the array
 * @cmp: The pointer to the function
 * Return: The index of the first element which match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, flag;

	if (array == NULL || cmp == NULL)
	{
		return ('\0');
	}
	for (i = 0; i < size; i++)
	{
		flag = cmp(array[i]);
		if (flag != 0)
		{
			break;
		}
	}
	if (flag != 0)
	{
		return (i);
	}
	return (-1);
}
