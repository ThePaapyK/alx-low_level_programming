#include "main.h"

/**
 * _strncpy - copies strings
 * @n: maximum number of bytes
 * @dest: pointer to first string
 * @src: pointer to second string
 * Return: pointer to resulting dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int l;

	for (l = 0; l < n && src[l] != '\0'; l++)
	{
		dest[l] = src[l];
	}

	for ( ; l < n; l++)
		dest[l] = '\0';

	return (dest);

}
