#include "main.h"


/**
 * _atoi - converts string into an integer
 * @s: string to be converted
 * Return: converted value
 */

int _atoi(char *s)
{
	int i, a;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] > 0 || s[i] <= 0)
		{
			a = s[i];
			
