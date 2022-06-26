#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* create_array - creates an array of chars and initializes it
* with a specific char
* @size: the size of the array
* @c: specific char
* Return: A pointer to the array or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
	{
		return (0);
	}

	s = malloc(size * sizeof(char));
	
	if (s == NULL)
		return (NULL);


	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
		return (s);
}
