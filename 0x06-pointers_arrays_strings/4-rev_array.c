#include "main.h"

/**
 * reverse_array - reverses array elements
 * @a: array
 * @n: number of array elements
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int i, j, k;

	for (i = 0, j = n - 1; i < n / 2/* && a[j] != '\0'*/; i++, j--)
	{
		k = a[i];
		a[i] = a[j];
		a[j] = k;
	}
}
