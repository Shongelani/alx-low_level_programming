#include "main.h"
/**
 * free_grid -  a function that frees a 2 dimensional grid
 * @grid: 2d grid
 * @height: grid height
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}

	free(grid);
}
