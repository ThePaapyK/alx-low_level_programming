#include "main.h"

/**
 * _strcpy - copies a string
 * @dest: buffer
 * @src: string
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, a;

	for (i = 0; src[i] != '\0'; i++)
	{
		;
	}

	i++;



	for (a = 0; a <= i; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
