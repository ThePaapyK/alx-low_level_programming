#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* sum_them_all - sums all input arguments
* @n: number of integers to be added
* Return: sum of all input arguments
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i;
	int add;

	if (n == 0)
		return (0);

	va_start(ap, n);
	add = 0;
	for (i = 0; i < n; i++)
	{
		add += va_arg(ap, int);
	}
	va_end(ap);
	return (add);
}
