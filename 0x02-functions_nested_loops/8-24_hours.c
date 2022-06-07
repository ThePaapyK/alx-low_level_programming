#include "main.h"

/**
 * jack_bauer - prints every minute of the  day of  Jack Bauer,
 * from 00:00 to 23:59
 */

void jack_bauer(void)
{
	int a;
	int b;
	int c;
	int d;
	int n;

	for (a = '0'; a < '3'; a++)
	{
		for (b = '0'; b <= n; b++)
		{
			for (c = '0'; c < '6'; c++)
			{
				for (d = '0'; d <= '9'; d++)
				{
					if ((a == '0') || (a == '1'))
					{
						n = '9';
					}
					else if (a == '2')
					{
						n = '3';
					}


					_putchar(a);
					_putchar(b);
					_putchar(':');
					_putchar(c);
					_putchar(d);
					_putchar('\n');
				}
			}
		}
	}
}
