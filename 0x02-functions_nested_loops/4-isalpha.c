#include "main.h"

/**
 * _isalpha - checks whether a character is an alphabet
 * @c: character to be checked
 * Return: 1 if c is an alphabet and 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
