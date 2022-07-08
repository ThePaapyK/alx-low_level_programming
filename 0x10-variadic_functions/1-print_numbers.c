#include "variadic_functions.h"
#include <stdlib.h>

void printn(long n);
/**
* print_numbers -  prints numbers, followed by a new line.
* @separator: the string to be printed between numbers
* @n: number of integers passed to the function
* Return: Nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	
	va_start(ap, n);
	
	for (i = 0; i < n; i++)
	{
		printn(va_arg(ap, int));
	}
	_putchar('\n');
}

/**
* print n - prints integers
* @n: integer to be printed
*/

void printn(long n)
{
	/** If number is smaller than 0, put a - sign
	* and change number to positive
	*/
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	/* Remove the last digit and recur*/
	if (n / 10)
		printn(n / 10);

	/* Print the last digit */
	_putchar(n % 10 + '0');
}
