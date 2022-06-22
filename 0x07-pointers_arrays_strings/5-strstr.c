#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring needle in the string
 * haystack. The terminating NULL bytes are not compared
 * @haystack: string
 * @needle: substring
 * Return: returns a pointer to the beginning of the located substring, or NULL
 * if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, b, j, count;
	char *p;

	count = 0;
	b = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = b; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				count++;
				break;
			}
		}
		b++;

		if (count == j - 1)
		{
			p = &(haystack[j - count]);
			break;
		}
	}
	if (haystack[i] == '\0')
	{
		return (NULL;
	}
	else
	{
		return (p);
	}
}
