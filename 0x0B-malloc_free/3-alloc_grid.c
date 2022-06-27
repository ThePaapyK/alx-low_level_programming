#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* alloc_grid - returns a ponter to a dimensional array of integers
* @width: width of array
* @height: Height of array
* Return: pointer to array
*/

int **alloc_grid(int width, int height)
{
	int i, j;
	int **matrix;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	matrix = malloc(height * sizeof(*matrix));

	if (matrix == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		matrix[i] = malloc(width * sizeof(**matrix));
		if (matrix[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(matrix[i]);
			free(matrix);
			return (NULL);

		for (j = 0; j < height; j++)
		{
			matrix[i][j] = 0;
		}
	}

	return (matrix);

}
