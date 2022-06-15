#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: an integer less than, greater than, or equal to zero depending on
 * whether s1 is less than, greater than or equal to s2
 */

int _strcmp(char *s1, char *s2)
{
	int i, j;

	for (i = 0; s1[i] != '\0'; i++)
	{
		;
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
		;
	}

	if (i > j)
	{
		return (15);
	}
	else if (i == j)
	{
		return (0);
	}
	else if (i < j)
	{
		return (-15);
	}
}
