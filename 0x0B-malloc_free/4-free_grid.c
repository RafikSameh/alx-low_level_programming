#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - is function to free the memory
 * @grid: is pointer to pointer
 * @height: is integer
 * Return: void
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
