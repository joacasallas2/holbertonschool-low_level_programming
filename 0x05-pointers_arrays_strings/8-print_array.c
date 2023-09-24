#include<stdio.h>

/**
  * print_array - function that prints n elements of an array of integers
  * @a: The pointer to the array to print
  * @n: The number of elements to print
  * Return: Nothing (void function)
  */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			printf("%d\n", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
}

