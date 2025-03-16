#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a dynamically allocated @D grid
 * @grid: Pointer to the 2D array
 * @height: Number of rows in the grid
 *
 * Ddescription: This funciton frees the memory allocated
 * array of integers, ensuring that all allocated rows
 * main pointer are properly deallocated
 *
 * Return: None
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	/* Free each row of the grid */
	for (i = 0; i < height; i++)
	{
		if (grid[i] != NULL)
		{
			free(grid[i]);
			grid[i] = NULL; /* Avoid dangling pointer */
		}
	}

	/* Free the main array */
	free(grid);
	grid = NULL;
}
