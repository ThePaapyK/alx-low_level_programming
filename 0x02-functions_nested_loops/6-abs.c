#include "main.h"

/**
 * _abs - Find the absolute value of a number
 * @n: number to be checked
 *Return: 0
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (n);
	}
	else
	{
		int a;

		a = -1 * n;
		return (a);
	}
}
