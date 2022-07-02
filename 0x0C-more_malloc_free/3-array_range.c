#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* array_range - creates an array of integers.
* Description: The array created should contain all the values
* from min (included) to max (included), ordered from min to max
* @min: minimum integers
* @max: maximum integers
* Return: the pointer to the newly created array.
* If min > max, return NULL
* If malloc fails, return NULL
*/

int *array_range(int min, int max)
{
	char *s;
	int i, j;
	
	if (min > max)
		return (NULL);
	for (i = min; i < max; i++)
		;
	s = malloc((i + 1) * sizeof(int));
	
	if (s == NULL)
		return (NULL);
	
	for (i = min, j = 0; i <= max; i++, j++)
	{
		s[j] = i;
	}
	
	return (s);
	free(s);
}
