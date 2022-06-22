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
	int i, j, c;

	i = 0;
	c = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j + c] != '\0' && haystack[i + c] != '\0'
		       && needle[j + c] == haystack[i + c])
		{
			if (haystack[i + c] != needle[j + c])
				break;
			c++;
		}
		if (needle[j + c] == '\0')
			return (&haystack[i]);
		j++;
		i++;
	}

	return (NULL);
}
