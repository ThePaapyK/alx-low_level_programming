#include <stdio.h>
#include <stdlib.h>

/**
 * natural - prints multiples of 3 and 5 below 1024
 *
 */

void natural(void)
{
	int n;
	int m = 0;

	for (n = 1; n < 1024; n++)
	{
		if (((n % 3) == 0) || ((n % 5) == 0))
		{
			printf("%d", n);

			if (n < 1023)
			{
				printf(",");
				printf(" ");
			}


			m = m + n;
		}
	}
	printf("\n");
	printf("%d\n", m);
}
