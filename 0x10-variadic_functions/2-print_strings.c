#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
* print_strings - prints strings, followed by a new line.
* @separator: the string to be printed between the strings
* @n: the number of strings passed to the function
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	
	va_start(ap, n);
	
	for (i = 0; i < n; i++)
	{
		if (va_arg(ap, char *) == NULL)
		{
			printf("%s", "(nil)");
		}
		else
		{
			printf("%s", va_arg(ap, char *));
		}
		if ((i < n -1) && (separator != NULL))
		{
			printf("%s", separator);
		}
	}
	_putchar('\n');
	va_end(ap);
}
