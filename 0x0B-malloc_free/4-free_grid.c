#include "main.h"
/**
 * free_grid - frees a 2 dimensional grid
 * previously created by your alloc_grid function
 * @grid: memories grid
 * @height: integer
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int s = 0;

	for (; s < height; s++)
		free(grid[s]);
	free(grid);
}
