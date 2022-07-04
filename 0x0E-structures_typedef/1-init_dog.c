#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* init_dog - initialize a variable of type struct dog
* @d: struct name;
* @name: name of dog
* @age: age of dog
* @owner: name of owner
* Return: nothing
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
