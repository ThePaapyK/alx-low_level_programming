#include "main.h"

/**
 * print_rev - prints a string in reverse folowed by a new line
 * @s: string to be printed
 * Return: Nothing
 */

void print_rev(char *s)
{
	char a[];
	a = s;
	a[0] = *s;
	int i;

	for (i--; i >= 0; i--)

	{
		_putchar(a[i]);
	}
	_putchar('\n');
}
