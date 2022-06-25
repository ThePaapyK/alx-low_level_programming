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

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			if ((atoi(argv[i]) <= 0) && ((strlen(argv[i]) - 1) != (log10(atoi(argv[i])) + 1)))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				add += atoi(argv[i]);

			}
		}

		if (i == argc)
		{
			printf("%d\n", add);
		}
	}
	else if (argc == 1)
	{
		printf("0\n");
	}
	return (0);
}
