#include "main.h"

/**
 * more_numbers - prints 0 to 14 ten times
 *
 */

void more_numbers(void)
{
	int count;
	int n;
	int k;
	int r;

	count = 1;

	while (count <= 10)
	{
		for (n = 0; n <= 14; n++)
		{
				k = n / 10;
				r = n % 10;


			if (n > 9)
			{
				_putchar(k + '0');
			}
			_putchar(r + '0');
		}
		_putchar('\n');
		count++;
	}
}
