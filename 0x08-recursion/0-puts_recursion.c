#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: string to be printed
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	int i = 0;

	_putchar(s[i]);
	i++;

	if (s[i] != '\0')
		_puts_recursion(s[i]);
}
