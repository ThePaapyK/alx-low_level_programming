#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers starting from 1 and 2
 * Return: 0
 */

int main(void)
{
	long int n = 0;
	long int m = 1;
	long int o = 0;
	long int a;

	while (a <= 4000000)
	{
		a = m + o;
		if (a % 2 == 0)
		{
			n = n + a;

		}

		o = m;
		m = a;
	}
	printf("%ld\n", n);
	return (0);
}
