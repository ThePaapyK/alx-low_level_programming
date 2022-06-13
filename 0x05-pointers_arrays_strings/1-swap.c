#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: First integer
 * @b: Second integer
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;

}
