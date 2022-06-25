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
	if (argc == 2)
	{
		if (atoi(argv[1]) > 0)
		{
			int cents = 100 * atoi(argv[1]);

			printf("%d\n", cents);
		}
		else
		{
			printf("0\n");
		}
	}
	else
	{
		printf("Error\n");

		return (1);
	}
	return (0);
}
