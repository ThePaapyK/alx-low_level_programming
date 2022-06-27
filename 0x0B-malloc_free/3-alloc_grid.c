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
	int i, j, k, l;
	int **matrix;

	l = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	matrix = malloc(height * sizeof(int *));

	if (matrix == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		matrix[i] = malloc(width * sizeof(int));
		if (matrix[i] == NULL)
		{
			l = 1;
			break;
		}

		for (j = 0; j < height; j++)
		{
			matrix[i][j] = 0;
		}
	}

	if (l == 1)
	{
		for (k = 0; k <= i; k++)
		{
			free(matrix[k]);
		}
		free(matrix);
	}

	return (matrix);
}
