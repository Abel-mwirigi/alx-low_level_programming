#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid created by alloc_grid function
 *
 * @grid: address of the grid to be freed
 * @height: height of the grid
 *
 * Return: void
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);

}
