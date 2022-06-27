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
	int i;
	char *s;

	s = malloc(sizeof(str));

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		s[i] = str[i];
	}

	s[i] = str[i];

	return (s);

	free(s);
}
