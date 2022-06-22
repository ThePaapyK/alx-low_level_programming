#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a sqausre matrix of
 * integers
 * @a: pointer to matrix
 * @size: size of matrix
 * Return: sum of two diagonals
 */

void print_diagsums(int *a, int size)
{
	int i, j;

	long int sum = 0;
	long int add = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum = sum + a[i][j];
			}

			if (j == size - i - 1)
			{
				add = add + a[i][j];
			}
		}
	}
	printf("%ld, %ld", sum, add);
}
