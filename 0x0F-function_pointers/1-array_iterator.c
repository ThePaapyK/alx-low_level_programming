#include "function_pointers.h"

/**
* array_iterator - executes a function given as a
* parameter on each element of an array.
* @array: array to be used
* @size: size of the array
* @action: a pointer to the function you need to use
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	int c = (int)size / sizeof(array[0]);

	for (i = 0; i < c; i++)
	{
		action(array[i]);
	}
}
