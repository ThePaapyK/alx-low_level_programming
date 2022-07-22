#include "main.h"

/**
* int binary_to_uint - converts a binary number to an unsigned int.
* @b: points to a string of 0 and 1 chars
* Return: the converted number, or 0 if:
* there is one or more chars in the string b that is not 0 or 1
* b is NULL
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, j, k, l, sum, a;

	l = 0;
	sum = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' || b[i] != '1')
			return (0);
	}

	for (j = i; b[j]; j--)
	{
		k = 'b[j]';
		a = pow(2, l)
		sum += k * a;
	}
	return (sum);
}
