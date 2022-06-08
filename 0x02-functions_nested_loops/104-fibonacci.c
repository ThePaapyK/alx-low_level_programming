#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the first 98 fibonacci numbers starting from 1 and 2
 * Return: 0
 */

int main(void)
{
	unsigned long int n;
	unsigned long int m = 1;
	unsigned long int o = 0;
	unsigned long int a;

	for (n = 0; n < 98; n++)
	{
		a = m + o;

		printf("%lu", a);

		if (n < 97)
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
