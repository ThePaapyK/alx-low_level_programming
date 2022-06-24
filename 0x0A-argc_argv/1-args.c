#include "main.h"
#include <stdio.h>

/**
* main - main block
* @argc: number of command line arguments
* @argv: array of command line arguments
* Return: 0
*/

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
