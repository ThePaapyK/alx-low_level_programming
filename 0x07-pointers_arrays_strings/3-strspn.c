#include "main.h"

/**
 * _strspn - Returns the number of bytes in the initial segment of s
 * which consists of only bytes from accept
 * @s: memory area
 * @accept: second memory area
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	int a = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				a++;
				break;
			}
		}
		if (accept[j] == '\0')
			break;
	}
	return (a);
}
