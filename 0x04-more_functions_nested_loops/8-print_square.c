#include "main.h"

/**
 * print_square - prints a square
 * @size: size of the square
 *
 */

void print_square(int size)
{
	int r;
	int s;

	if (size > 0)
	{


		for (r = 1; r <= size; r++)
		{
			for (s = 0; s < size; s++)
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
