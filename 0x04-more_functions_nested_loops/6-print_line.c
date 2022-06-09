#include "main.h"

/**
 * print_line - prints line
 * @n: indicates length of line
 *
 */

void print_line(int n)
{
	int c;

	for (c = 0; c <= n; c++)
	{
		if (n > 0)
		{
			_putchar('_');
		}

	}
	_putchar('\n');
}
