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

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&(s[i]));
		}
		break;
	}

	if (s[i] == '\0')
		return (0);
}
