#include "main.h"

/**
 * print_alphabet_x10 - Prints all the aphabets ten times
 */

void print_alphabet_x10(void)
{
	char c;
	int t;

	c = 'a';
	t = 0;

	do {

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');

	++t;
	} while (t < 10);
}
