#include <stdio.h>
		
#include <stdlib.h>
		
#include "main.h"
		
/**
		
 * free_grid - frees a 2d array
 * @grid: the grid
 * @height: the height of the grid
 * Description: free memory of grid
 * Return: nothing	
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
