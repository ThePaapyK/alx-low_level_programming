#include "main.h"

/**
 * print_diagonal - prints a diagonal
 * @n: parameter
 */

void print_diagonal(int n)
{
	int r;
	int s;

	if (n > 0)
	{
		for (r = 1; r <= n; r++)
		{
			for (s = 0; s < (r - 1); s++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
