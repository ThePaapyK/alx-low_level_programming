#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - main block
* @argc: argument count
* @argv: argument vector
* Return: (0)
*/

int main(int argc, char **argv)
{
	int amount, count;
	unsigned int i;
	char *ptr;
	int cents[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = strtol(argv[1], &ptr, 10);
	count = 0;

	if (!*ptr)
	{
		while (amount > 1)
		{
			for (i = 0; i < sizeof(cents[i]); i++)
			{
				if (amount >= cents[i])
				{
					count += amount / cents[i];
					amount = amount % cents[i];
				}
			}
		}
		if (amount == 1)
			count++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", count);
	return (0);
}
