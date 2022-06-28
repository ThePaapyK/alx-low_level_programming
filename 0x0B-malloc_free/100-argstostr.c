#include "main.h"
#include <stdlib.h>

/**
* argstostr - concatenates all the arguments of your program.
* Description: Each argument should be followed by
* a \n in the new string.
* @ac: argument count
* @av: argument vector
* Return: a pointer to a new string, or NULL if it fails.
* NULL if ac == 0 or av == NULL.
*/

char *argstostr(int ac, char **av)
{
	char *a, *arg;
	int i, j, total;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0, total = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j) != '\0'; j++, total++)
			;
		total++;
	}
	total++;

	a = malloc(total * sizeof(char));
	if (a == NULL)
		return (NULL);

	arg = a;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*a = av[i][j];
			a++;
		}
		*a = '\n';
		a++;
	}

	return (arg);
}
