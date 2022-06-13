#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * followed by a new line
 * @n: number of elements to print
 * @a: the array
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(a[i]);

		if (i < (n -1))
		{
			_putchar(',');
			_putchar(' ');
		}
	}
}
