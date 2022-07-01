#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: Length of s
 */

int _strlen(char *s)
{

	int a = 0;

	while (*s != '\0')
	{
		a++;
		s++;
	}

	return (a);
}

/**
* string_nconcat - concatenates two strings.
* @s1: first string
* @s2: second string
* @n: number of s2 elemnts that should be concatenated
* Return: Newly allocated space in memory
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, l, m;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = _strlen(s1);
	j = _strlen(s2);
	if (n >= j)
	{
		s = malloc((i + j + 1) * sizeof(char));
	}
	else
	{
		s = malloc((i + n + 1) * sizeof(char));
	}
	for (k = 0; s1[k] != '\0'; k++)
	{
		s[k] = s1[k];
	}
	m = k;
	if (n >= j)
	{
		for (l = 0; l < j; l++)
			s[m + l] = s2[l];

		s[m + l] = '\0';
	}
	else if (n < j)
	{
		for (l = 0; l < n; l++)
			s[m + l] = s2[l];

		s[m + l] = '\0';
	}
	return (s);
	free(s);
}
