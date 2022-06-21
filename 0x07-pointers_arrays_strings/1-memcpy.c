#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: destination memory area
 * @src: source memory area
 * @n: number of bytes to be copied
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	
	char *beat;
	
	beat = dest;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (beat);
}
