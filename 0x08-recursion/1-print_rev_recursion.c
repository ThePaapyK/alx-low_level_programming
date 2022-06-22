#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to be printed
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(*(s - 1));
		s--;
	}
	_print_rev_recursion(s);
}
