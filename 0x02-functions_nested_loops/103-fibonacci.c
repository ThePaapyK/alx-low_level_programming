#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers starting from 1 and 2
 * Return: 0
 */

int main(void)
{

	long int m = 1;
	long int o = 0;
	long int a = 1;

	while (a <= 4000000)
	{
		a = m + o;
		if (a % 2 == 0)
		{
			printf("%ld", a);

			if (a < 4000000)
			{
				printf(",");
				printf(" ");
			}
		}
		m = a;
		o = m;
	}
	printf("\n");
	return (0);
}
