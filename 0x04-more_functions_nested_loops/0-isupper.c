#include "main.h"

/**
 * _isupper - checks for uppercase characters
 * @c: character to be checked
 * Return: 1 when uppercase, 0 if otherwise
 */

int _isupper(int c)
{
	if ((c > 64) && (c < 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
