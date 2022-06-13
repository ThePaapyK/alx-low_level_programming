#include "main.h"

/**
 * puts_half - prints second half o a string followed  by a new line
 * @str: string
 * Return: Nothing
 */

void puts_half(char *str)
{
	int i, k, c;

	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}
	i++;
	k = i;

	if (k % 2 != 0)
	{
		for (c = (k - 1) / 2; str[c] != '\0'; c++)
			_putchar(str[c]);
	}
	else
	{
		for (c = k / 2; str[c] != '\0'; c++)
			_putchar(str[c]);
	}
	_putchar('\n');
}
