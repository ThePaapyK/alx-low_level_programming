#include "main.h"

/**
 * _strcat - catenates
 * @dest: pointer to first string
 * @src: pointer to second string
 * Return: pointer to resulting dest
 */

char *_strcat(char *dest, char *src)
{
	int i, l;

	for (i = 0; dest[i] != '\0'; i++)
	{
		;
	}

	for (l = 0; src[l] != '\0'; l++)
	{
		dest[i + l] = src[l];
	}
	dest[i + l] = '\0';
	return (dest);

}
