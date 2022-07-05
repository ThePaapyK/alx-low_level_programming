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
		if (d->name == 0)
		{
			printf("Name: %s\n", "(nil)");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}
		printf("Age: %f\n", d->age);
		if (d->owner == 0)
		{
			printf("Owner: %s\n", "(nil)");
		}
		else
		{
			printf("Owner: %s\n", d->owner);
		}
	}
}
