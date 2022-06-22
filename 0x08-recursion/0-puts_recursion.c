#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: string to be printed
 * Return: Nothing
 */

void _puts_recursion(char *s)
{


	_putchar(*s);
	s++;

	if (*s != '\0')
	{
		_puts_recursion(s);
	}

	_putchar('\n');
}
