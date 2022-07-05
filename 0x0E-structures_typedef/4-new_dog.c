#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strdup - returns a pointer to a new string which is
* a duplicate of the string str.
* @str: string to be copied
* Return:  a pointer to the duplicated string.
* It returns NULL if insufficient memory was available
*/

char *_strdup(char *str)
{
	int i, j;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
		;

	s = malloc(i * sizeof(char) + 1);

	if (s == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < i; j++)
	{
		s[j] = str[j];
	}

	s[j] = str[j];

	return (s);
}

/**
* new_dog -creates a new dog.
* @name: name of dog
* @age: age of dog
* @owner: name of dog owner
* Return: pointer to new_dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(struct dog));

	if (new_dog == 0 || name == 0 || owner == 0)
		return (0);

	new_dog->name = _strdup(name);
	if (new_dog->name == 0)
	{
		free(new_dog);
		return (0);
	}
	new_dog->age = age;
	new_dog->owner = _strdup(owner);
	if (new_dog->owner == 0)
	{
		free(new_dog);
		free(new_dog->name);
		return (0);
	}
	return (new_dog);
}
