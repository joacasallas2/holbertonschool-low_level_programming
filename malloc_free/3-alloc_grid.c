#include "main.h"
/**
 * alloc_grid -  function that returns a pointer to a 2 dimensional array
 * of integers
 * @width: The width of the 2 dimensional array
 * @height: The height of the 2 dimensional array
 * Return: A pointer to the 2 dimensional array or NULL on failure
 * If width or height is 0 or negative, return NULL
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **p;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(int *) * height);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);
		if (p[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(p[i]);
			}
			free(p);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
