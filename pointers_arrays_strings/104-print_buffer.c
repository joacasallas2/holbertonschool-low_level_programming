#include <stdio.h>

/**
 * print_buffer -  function that prints a buffer.
 * @b: The pointer to destine string
 * @size: The pointer to source string
 * Return: Nothing, void function
 */
void print_buffer(char *b, int size)
{
	int i, j, k, line;
	char array[9] = "\1\2\3\4\5\6\7\n\0";

	for (i = 0; i < size; i += 2)
	{
		if (i % 10 == 0 && i != 0)
		{
			for (j = 0; j < 10; j++)
			{
				for (k = 0; k < 9; k++)
				{
					if (b[i + j] == array[k])
						b[i + j] = '.';
				}
				printf("%c", b[i + j - 10]);
			}
			line = 0;
			printf("\n");
		}
		if (i % 10 == 0)
			printf("%.8x: %.2x%.2x ", i, b[i], b[i + 1]);
		else
			printf("%.2x%.2x ", b[i], b[i + 1]);
		line += 2;
	}
	for (i = 0; i < (10 - line); i += 2)
	{
		printf("%s%s ", "  ", "  ");
	}
	for (j = 0; j < line; j++)
	{
		for (k = 0; k < 9; k++)
		{
			if (b[i + j] == array[k])
				b[i + j] = '.';
		}
		printf("%c", b[size - line + j]);
	}
	printf("\n");
}
