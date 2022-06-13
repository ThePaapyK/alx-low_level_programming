#include "main.h"


/**
 * _atoi - converts string into an integer
 * @s: string to be converted
 * Return: converted value
 */

int _atoi(char *s)
{
	int i, a, c;

	
	a = 0;
	c = -1;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			c *= -1;

		if (s[i] > 47 && s[i] < 58)
		{
			if (a < 0)
				a = (a * 10) - (s[i] - '0');
			else
				a = (s[i] - '0') * -1;

			if (s[i + 1] < 48 || s[i + 1] > 57)
				break;
		}
	}
	if (c < 0)
		a *= -1;

	return (a);
}
