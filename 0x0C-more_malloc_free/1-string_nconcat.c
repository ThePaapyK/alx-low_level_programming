#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* string_nconcat - concatenates two strings.
* @s1: first string
* @s2: second string
* n: number of s2 elemnts that should be concatenated
* Return: Newly allocated space in memory
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, k, l;
	
	char *s;
	
	if (s1 == NULL)
		s1 = "";
	
	if (s2 == NULL)
		s2 = "";
	
	for ( i = 0; s1[i] != '\0'; i++)
		;
	
	for (j = 0; s2[j] !+ '\0'; j++)
		;
	if (n >= j)
	{
		s = malloc((i + j) * sizeof(char));
	}
	else
	{
		s = malloc((i + n) * sizeof(char));
	}
	
	for (k = 0; s1[k] != '\0'; k++)
	{
		s[k] = s1[k];
	}
	k++;
	if ( n >= j)
	{
		for (l = 0; l < j; l++)
		{
			s[k + l] = s2[l];
		}
	}
	else
	{
		for (l = 0; l <= n; l++)
		{
			s[k + l] = s2[l];
		}
	}
	
	return (s);
	
	free (s);
}
