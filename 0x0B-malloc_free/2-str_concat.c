#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* str_concat - concatenates two strings
* @s1: String 1
* @s2: String 2
* Return: pointer to soup
*/

char *str_concat(char *s1, char *s2)
{
	int i, j, c, d;
	char *soup; /*memory allocation*/

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	
	for (j = 0; s2[j] != '\0'; j++)
		;

	soup = malloc((i + j) * sizeof(char) + sizeof(char));

	for (c = 0; s1[c] != '\0'; c++)
	{
		soup[c] = s1[c];
	}

	for (d = 0; s2[d] != '\0'; d++)
	{
		soup[c + d] = s2[d];
	}
	soup[c + d] = s2[d];

	return (soup);

	free(soup);
}
