#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

void prints(char *s);
/**
* print_name -  prints a name.
* @name: name to be printed
* @f: function pointer
*/

void print_name(char *name, void (*f)(char *))
{


	f = &prints;

	f(name);
}

/**
* prints - prints a string
* @: string to be printed
*/

void prints(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
}
