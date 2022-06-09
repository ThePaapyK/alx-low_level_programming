#include "main.h"

/**
 * _isdigit - checks for digits from 0 through 9
 * @c: character to be checked
 * Return: 1 if digit, 0 if otherwise
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
