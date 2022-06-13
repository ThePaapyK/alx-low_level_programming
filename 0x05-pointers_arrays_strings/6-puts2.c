#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str: string to be printed
 * Return: Nothing
 */

void _puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);

		str = str + 2;
	}

	_putchar('\n');
}