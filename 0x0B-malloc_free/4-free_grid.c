#include "main.h"

/**
 * free_grid -  frees a 2 dimensional grid previously created by your
 *  alloc_grid function.
 *  @grid: pointer to free memory
 *  @height: dimension to pointer
 *  Return: free
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
