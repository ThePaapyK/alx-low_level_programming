#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	if (i * i != n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else if (i * i < n)
	{
		i++;
	}
	return (_sqrt_recursion(n + 1));
}
