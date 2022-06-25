#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - adds numbers
* @argc: argument counter
* @argv: argument vector
* Return: Sum of arguments
*/

int main(int argc, char **argv)
{
	int i;

	int add = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) <= 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				add += atoi(argv[i]);

			}
		}

		printf("%d\n", add);
	}
	else if (argc == 1)
	{
		printf("0\n");
	}
	return (0);
}
