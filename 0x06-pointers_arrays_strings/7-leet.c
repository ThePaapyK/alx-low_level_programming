#include "main.h"

/**
 * leet - encodes the string to 1337
 * @s: string
 * Return: Modified string
 */

char *leet(char *s)
{
	int i, j;

	char a[] = "aeotl";
	char b[] = "AEOTL";
	char n[] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0' && b[j] != '\0'; j++)
		{
			if (s[i] == a[j] || s[i] == b[j])
			{
				s[i] = n[j];
			}
		}
	}
	return (s);
}
