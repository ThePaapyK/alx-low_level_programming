#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the results of the multiplication of two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i;

	int mul = 1;

	if (argc > 1 && argc < 4)
	{
		for (i = 1; i < argc; i++)
		{

			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);

		return (0);
	}
	else
	{
		printf("Error\n");

		return (1);
	}


}
