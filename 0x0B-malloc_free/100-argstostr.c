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
	int i, j;
	char **s;

	if (ac == 0 || av == NULL)
		return (NULL);

	s = malloc(ac * sizeof(*av));
	
	if (s == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		s[i] = malloc(sizeof(av) + 1);
		
		for (j = 0; av[i][j] != '\0'; j++)
		{
			s[i][j] = av[i][j];
		}
		s[i][j] = '\n';
	}
	return (s);
	free(*s);
	free(s);
}
