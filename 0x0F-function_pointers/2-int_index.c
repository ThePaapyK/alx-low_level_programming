#include "function_pointers.h"
#include <stdlib.h>

/**
* int_index - searches for an integer in an array.
* @array: array to be searched.
* @size: number of array elements
* @cmp:  pointer to the function to be used to compare values
* Return: the index of the first element
* for which the cmp function does not return 0.
* If no element matches, return -1
* If size <= 0, return -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, a;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			a = i;
			break;
		}
	}
	if (i == size)
	{
		return (-1);
	}
	return (a);
}
