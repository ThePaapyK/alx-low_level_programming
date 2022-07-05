#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* new_dog -creates a new dog.
* @name: name of dog
* @age: age of dog
* @owner: name of dog owner
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j, k, l;
	char *s;

	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;
	s = malloc((i + j) * sizeof(char) + sizeof(int));
	if (s == NULL)
		return (NULL);
	for (k = 0; k <= i; k++)
	{
		s[k] = name[k];
	}
	for (l = 0; l <= j; l++)
	{
		s[k + l] = owner[l];
	}
	(float) s[k + l] = age;
	return (s);
}
