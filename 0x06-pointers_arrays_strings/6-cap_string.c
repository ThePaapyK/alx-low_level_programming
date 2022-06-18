#include "main.h"

/**
 * cap_string - Capitalizes all words in a string
 * @s: string
 * Return: pointer to s
 */

char *cap_string(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
char j;
j = s[i - 1];
if ((i == 0) || (j == 32) || (j > 19 && j < 23) || (j > 27 && j < 30) ||
(j == 44) || (j == 46) || (j == 59) || (j == 123) || (j == 125) ||
(j == 63) || (j == '\t') || (j == '\n'))
{
if (s[i] > 96 && s[i] < 123)
{
s[i] = s[i] - 32;
}
}
}
return (s);
}
