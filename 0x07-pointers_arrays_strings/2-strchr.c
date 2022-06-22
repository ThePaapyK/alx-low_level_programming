#include "main.h"

/**
 * _strchr - Returns a pointer to the first occurrence of the character c in
 * the string s, or NULL if the character is not found
 * @s: string
 * @c: character to be found
 * Return: ponter to c, or NULL
 */

char *_strchr(char *s, char c)
{
	int i;
	char *p;

	int count = 1;


	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			p = &(s[i]);
			break;
		}
		count++;

	}

	if (s[i] == '\0' && c != '\0')
	{
		p = &(s[i]);
	}

	if (count == i)
	{
		return (0);
	}
	else
	{
		return (p);
	}

}
