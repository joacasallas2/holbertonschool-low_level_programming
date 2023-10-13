#include <stdio.h>

/**
 * print_buffer -  function that prints a buffer.
 * @b: The pointer to destine string
 * @size: The pointer to source string
 * Return: Nothing, void function
 */
void print_buffer(char *b, int size)
{
	int i, j, k, l;
	char array[9] = "\1\2\3\4\5\6\7\n\0";

	for (i = 0, j = 1; i < size; i += 2, j++)
	{
		if (i % 5 == 0)
			printf("%.8x: %.2x%.2x ", i, b[i], b[i + 1]);
		else
			printf("%.2x%.2x ", b[i], b[i + 1]);
		if (j % 5 == 0)
		{
			for (k = 0; k < 10; k++)
			{
				for (l = 0; l < 9; l++)
				{
					if (b[k + i - 8] == array[l])
						b[k + i - 8] = '.';
				}
				printf("%c", b[k + i - 8]);
			}
			printf("\n");
		}
	}
	if (i >= size)
	{
		printf("          ");
		for (k = 0; b[k + i - 6]; k++)
		{
			for (l = 0; l < 9; l++)
			{
				if (b[k + i - 6] == array[l])
					b[k + i - 6] = '.';
			}
			printf("%c", b[k + i - 6]);
		}
		printf(".");
	}
	printf("\n");
}
