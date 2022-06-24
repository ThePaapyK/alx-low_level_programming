#include "main.h"
#include <stdio.h>

/**
* main - main block
* @argc: number of command line arguments
* @argv: array of command line commands (strings)
* Return: 0
*/

int main(int argc, char **argv)
{
	int i;
	
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
