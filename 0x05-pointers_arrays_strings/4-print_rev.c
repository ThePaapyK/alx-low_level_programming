#include "main.h"

/**
 * print_rev - prints a string in reverse folowed by a new line
 * @s: string to be printed
 * Return: Nothing
 */

void print_rev(char *s)
{
	char *a;

	for (*a = '\0'; *a >= *s; a--)

	{
		_putchar(*a);
	}
	_putchar('\n');
}
