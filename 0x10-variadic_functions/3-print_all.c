#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* printint - prints int element from va_list
* @ap: va_list passed to function
*/
void printint(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
* printchar - prints char element from va_list
* @ap: va_list passed to function
*/
void printchar(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
* printstr - prints string from va_list
* @ap: va_list passed to function
*/

void printstr(va_list ap)
{
	char *s;

	s = va_arg(ap, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}

/**
* printfloat - prints float element from va_list
* @ap: va_list passed to function
*/

void printfloat(va_list ap)
{
	printf("%f", va_arg(ap, double));
}



/**
 * print_all - prints all kinds of data types passed to it
 * @format: string of formats for printing
 */
void print_all(const char * const format, ...)
{
	unsigned int i, j;
	va_list ap;
	char *dist;

	doer bank[] = {
		{ "i", printint },
		{ "c", printchar },
		{ "s", printstr },
		{ "f", printfloat }
	};

	i = 0;
	dist = "";
	va_start(ap, format);
	while (format != NULL && format[i / 4] != '\0')
	{
		j = i % 4;
		if (bank[j].daty[0] == format[i / 4])
		{
			printf("%s", dist);
			bank[j].f(ap);
			dist = ", ";
		}

		i++;
	}
	printf("\n");
	va_end(ap);
}
