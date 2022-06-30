#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* malloc_checked -  allocates memory using malloc.
* Description: if malloc fails, the malloc_checked
* function should cause normal process termination 
* with a status value of 98.
* @b: amount of memory to be allocated.
* Return: pointer to the allocated memory.
*/

void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}
