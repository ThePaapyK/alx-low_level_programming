#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 *
 */

void print_triangle(int size)
{
	int r;
	int s;

	if (size > 0)
	{

		for (r = 1; r <= size; r++)
		{
			for (s = 0; s < (size - r); s++)
			{
				_putchar(' ');
			}

			for (c = 1; c <= r; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
