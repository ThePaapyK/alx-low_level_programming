#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 * Documentation: Prints all possible combinations of three digits
 * Return: 1
 */

int main(void)
{
	int a;
	int b;
	int n = '1';
	int m = '2';
	int c;

	for (a = '0'; a < '8'; a++)
	{
		for (b = n; b < '9'; b++)
		{
			for (c = m; c <= '9'; c++)
			{
				if (a < b && b < c)
				{
				putchar(a);
				putchar(b);
				putchar(c);

				if (a < '7' || b < '8' || c < '9')
				{
					putchar(44);
					putchar(32);
				}
				}
			}
		}
		n++;
		m++;
	}
	putchar('\n');
	return (0);
}
