#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *_memset(char *s, char b, unsigned int n)
{
	char *beat;

	beat = s;

	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}

	return (beat);
}

/**
* _calloc - allocates memory for an array, using malloc.
* Description: The _calloc function allocates memory for an array
* of nmemb elements of size bytes each.
* The memory is set to zero.
* If nmemb or size is 0, then _calloc returns NULL.
* If malloc fails, then _calloc returns NULL.
* @nmemb: number of array elements
* @size: size of each array element in bytes
* Return: pointer to the allocated memory.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s;
	/*unsigned int i;*/

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	s = malloc(nmemb * size);
	if (s == NULL)
	{
		return (NULL);
	}
	else
	{
		_memset(s, '0', nmemb * size);
	}

	return (s);
}
