#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: Length of s
 */

int _strlen(char *s)
{
	int i = 0;
	char b[] = s;
	int a = 0;

	while (b[i] != '\0')
	{
		a++;
		i++;
	}

	return (a);
}
