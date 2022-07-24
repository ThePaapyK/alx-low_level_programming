#include "main.h"

/**
* print_binary - prints the binary representation of a number.
* n: number in decimal
*/

void print_binary(unsigned long int n)
{
	unsigned int i, a;

	for (i = 0; _pow(2, i) > n; i++)
			;
	i--;
	a = _pow(2, i);
	_putchar('1');

	while (n > 0)
	{
		n = n - a;
		for (i--; n; i--)
		{
			if (n - _pow(2, i) < 0)
			{
				_putchar('0');
			}
			else
			{
				_putchar('1');
				a = _pow(2, i);
				break;
			}
		}
	}
}
