#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed to by s with
 * the constant byte b
 * @s: memory area
 * @b: constant byte
 * @n: number of bytes to be filled
 * Return: the pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		s[i] = b;

		i++;
	}

	return (s);
}
