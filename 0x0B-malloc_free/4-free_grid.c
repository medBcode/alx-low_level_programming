#include "main.h"
/**
 * free_grid - frees a 2-D grid previously created by alloc_grid
 * @grid: 2D array
 * @height: height of rows
 * Return: nothing, frees memory
 **/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
