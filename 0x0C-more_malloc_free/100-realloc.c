#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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
	int i,j,k,l;

	if (ptr == NULL)
	{
		s = malloc(new_size);
		return (s);
		free (s);
	}

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return(NULL);
	}

	s = malloc(new_size);

	for(i = 0; i < new_size / sizeof(*ptr); i++)
	{
		s[i] = ptr[i];
	}
	return (s);
	free(s);
}
