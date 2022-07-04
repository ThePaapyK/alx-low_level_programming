#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_dog -prints a struct dog
* @d: struct to be printed
* Return: nothing
*/

void print_dog(struct dog *d)
{
	if (d != NULL)
	{

		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
		
