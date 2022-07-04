#ifndef DOG_H
#define DOG_H

/**
* struct dog - holds characteristics about a dog
* @name: name of dog
* @age: age of dog
* @owner: owner
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif /* DOG_H */

#ifndef MAIN_H
#define MAIN_H
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* MAIN_H */
