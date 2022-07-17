#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - performs simple operations.
* @argc: argument counter
* @argv: argument vector
* Return: 0
*/

int main(int argc, char **argv)
{
	char *oper;
	int un, deux;

	oper = argv[2];
	un = atoi(argv[1]);
	deux = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(oper) == NULL || oper[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*oper == '%' || *oper == '/') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(oper)(un, deux));
	return (0);
}
