#include "main.h"

int pali(char *s, int c);
/**
* is_palindrome - checks if a string is a palindrome
* @s: string
* Return: 1 if palindrome, 0 if not.
*/

int is_palindrome(char *s)
{
	int c = _strlen_recursion(s);
	return (pali(s, c));
}

/**
 * _strlen_recursion - return length of a string
 * @s: string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int c;

	c = 0;
	if (*s == '\0')
		return (0);

	c = 1 +  _strlen_recursion(s + 1);

	return (c);
}


/**
 * pali - recursive check of palindrome
 * @s: string
 * @c: length of string
 * Return: 1 if palindrome, 0 if not
 */

int pali(char *s, int c)
{
	if (*s == *(s + c - 1))
	{
		if (c <= 0)
			return (1);
		else
			return (pali(++s, c - 2));
	}
	else
		return (0);
}
