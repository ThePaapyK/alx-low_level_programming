#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
* sum_them_all - sums all input arguments
* @n: number of integers to be added
* Return: sum of all input arguments
*/

int sum_them_all(const unsigned int n, ...);
{
	if (n == 0)
		return (0);
	
	va_list sum;
	int i;
	int add;
	
	va_start(sum, n);
	add = 0;
	for (i = 0; i < n; i++)
	{
		add = add + va_arg(sum, int);
	}
	va_end(sum);
	return (add);
}
