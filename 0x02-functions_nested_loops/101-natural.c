#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints multiples of 3 and 5 below 1024
 *Return: 0
 */

int main(void)
{
	int n;
	int m = 0;

	for (n = 1; n < 1024; n++)
	{
		if (((n % 3) == 0) || ((n % 5) == 0))
		{
			m = m + n;
		}
	}

	printf("%d\n", m);

	return (0);
}
