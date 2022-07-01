#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _calloc - allocates memory for an array, using malloc.
* Description: The _calloc function allocates memory for an array
* of nmemb elements of size bytes each and returns a pointer to the allocated memory.
* The memory is set to zero.
* If nmemb or size is 0, then _calloc returns NULL.
* If malloc fails, then _calloc returns NULL.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s;
	int n;

	if (nmemb = 0 || size == 0)
		return (NULL);

	s = malloc(nmemb * size);

	if (s == NULL)
		return (NULL);

	for (n = 0; n < nmemb; n++)
		s[n] = 0;

	return (s);
}
