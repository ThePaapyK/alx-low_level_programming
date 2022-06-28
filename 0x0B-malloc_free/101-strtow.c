#include "main.h"
#include <stdlib.h>

/**
* strtow -  splits a string into words
* Description: Each element of this array should contain
* a single word, null-terminated.
* The last element of the returned array should be NULL.
* Words are separated by spaces.
* @str: string to be split
* Return: a pointer to an array of strings (words)
* or NULL if str == NULL or str == "".
*/

char **strtow(char *str)
{
	int i, j, l, sp, k;
	char **tow;

	if (str == NULL || strcmp(str, " ") == 0)
		return (NULL);

	sp = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if(str[i] == " ")
			sp++;
	}
	sp++;

	tow = malloc(i * sizeof(char) + 1);

	if (tow == NULL)
		return NULL;

	j = 0;

	for (k = 0; k < sp; k++)
	{

		for (l = 0; str[l + j + 1] != " "; l++)
			;

		tow[k] = malloc(sizeof(char) * l + 1);

		if (tow[k] == NULL)
		{
			for (--k; k >= 0; k--)
				free(tow[k]);
			free(tow);
			return (NULL);
		}

		for (j = 0; str[j] != " "; j++)
		{
			tow[k][j] = str[j];
		}
		tow[k][j] = '\0';
	}
	tow[k][j] = NULL;

	return (tow);
	free(tow);
}
