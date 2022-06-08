#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers starting from 1 and 2
 * Return: 0
 */

int main(void)
{
	long int n;
	long int m = 1;
	long int o = 0;
	long int a;

	for (n = 0; n < 50; n++)
	{
		a = m + o;
		printf("%ld", m);

		if (n < 49)
		{
			printf(",");
			printf(" ");
		}
		o = m;
		m = a;
	}
	printf("\n");
	return (0);
}
