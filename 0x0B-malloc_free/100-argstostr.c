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
	int i;

	if (ac == 0 || av == NULL)
		return (NULL);

	char **s;

	s = malloc(ac * sizeof(*av));
	
	if (s == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		s[i] = malloc(sizeof(av) + 1);
		
		s[i] = av[i];
	}
	return (*s);
	free(*s);
	free(s);
}
