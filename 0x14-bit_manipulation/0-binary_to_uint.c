#include "main.h"
#include <math.h>
#include <string.h>
/**
* binary_to_uint - converts a binary number to an unsigned int.
* @b: points to a string of 0 and 1 chars
* Return: the converted number, or 0 if:
* there is one or more chars in the string b that is not 0 or 1
* b is NULL
*/

unsigned int binary_to_uint(const char *b)
{
	int i, a, l;
	int k;
	unsigned int sum = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	i--;
	l = 0;
	while (i >= 0)
	{
		k =  b[i] - 48;
		a = _pow(2, l);
		sum += (k * a);

		i--;
		l++;
	}
	return (sum);
}

/**
 * _pow - finds the exponent of a number
 * @a: base
 * @b: power
 * Return: result
 */

int _pow(int a, int b)
{
	int i;

	int exp = 1;

	for (i = 0; i < b; i++)
	{
		exp = exp * a;
	}
	return (exp);
}
