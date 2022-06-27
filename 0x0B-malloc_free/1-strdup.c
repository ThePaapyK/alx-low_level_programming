#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* _strdup - returns a pointer to a new string which is
* a duplicate of the string str.
* @str: string to be copied
* Return:  a pointer to the duplicated string.
* It returns NULL if insufficient memory was available
*/

char *_strdup(char *str)
{
	int i, j;
	char *s;

	for (i = 0; str[i] != '\0'; i++)
		;

	s = malloc(i * sizeof(char) + 1);

	if (s == NULL)
	{
		return (NULL);
	}

	if (str == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < i; j++)
	{
		s[j] = str[j];
	}

	s[j] = str[j];

	return (s);

	free(s);
}
