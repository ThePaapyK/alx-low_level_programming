#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: destination memory area
 * @src: source memory area
 * @n: number of bytes to be copied
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *beat;

	beat = dest;
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (beat);
}

/**
* _realloc - reallocates a memory block
* @ptr:  pointer to the memory previously allocated
* @old_size: size, in bytes, of the allocated space for ptr.
* @new_size: new size, in bytes of the new memory block.
* Return: New allocation
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *s;

	if (ptr == NULL)
	{
		s = malloc(new_size);
		if (s == NULL)
			return (NULL);
		return (s);
		free(ptr);
	}

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	s = malloc(new_size);
	if (s == NULL)
		return (NULL);

	_memcpy(s, ptr, old_size);
	free(ptr);
	return (s);
}
