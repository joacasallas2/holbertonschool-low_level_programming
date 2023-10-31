#include "main.h"
/**
 * free_grid -  function that frees a 2 dimensional grid previously created
 * @grid: Pointer to the 2 dimensional array
 * @height: The height of the array
 * Return: Nothing (void function)
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
