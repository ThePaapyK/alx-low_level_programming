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
	int (**oper)(int, int);
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2] != "+" || argv[2] != "-" || argv[2] != "*" || argv[2] != "/" || argv[2] != "%")
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2] == "/" || argv[2] == "%") && (argv[3] == "0"))
	{
		printf("Error\n");
		exit(100);
	}

	oper = (*get_op_func(argv[2]));

	printf("%d\n", oper(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
