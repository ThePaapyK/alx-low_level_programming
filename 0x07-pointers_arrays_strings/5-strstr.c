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
