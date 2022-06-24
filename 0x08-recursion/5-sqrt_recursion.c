#include "main.h"

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}


/**
* _sqrt - finds square root
* @n: number whose square root is to be found
* @i: incrementer
* Return: square root of `n`
*/

int _sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i < n)
		return (_sqrt(n, i + 1));
	else
		return (-1);
}
