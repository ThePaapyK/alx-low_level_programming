#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 * Return: Pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j, k, l;

	for (i = 0; dest[i] != '\0'; i++)
	{
		;
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		;
	}

	i++;
	j++;

	for (k = i, l = 0 ; k < (j + i); k++, l++)
	{
		dest[k] = src[l];
	}
	dest[k] = '\0';
	return (*dest);
}
