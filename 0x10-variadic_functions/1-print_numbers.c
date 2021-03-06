#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>

void printn(int n);
void prints(const char *s);

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
		if ((i < n - 1) && (separator != NULL))
		{
			prints(separator);
		}
	}
	_putchar('\n');
	va_end(ap);
}

/**
* printn - prints integers
* @n: integer to be printed
*/

void printn(int n)
{
	/**
	* If number is smaller than 0, put a - sign
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

/**
* prints - prints a string
* @s: string to be printed
*/

void prints(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
}
