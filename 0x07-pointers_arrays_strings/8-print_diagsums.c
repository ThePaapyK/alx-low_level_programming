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
	int i, sum, sizer;

	i = 0;
	sum = 0;
	sizer = size * size;
	while (i < sizer)
	{
		if (i % (size + 1) == 0)
			sum += a[i];
		i++;
	}
	printf("%d, ", sum);

	sum = 0;
	i = 0;
	while (i < sizer)
	{
		if (i % (size - 1) == 0 && i != (sizer - 1) && i != 0)
			sum += a[i];
		i++;
	}
	printf("%d\n", sum);
}
