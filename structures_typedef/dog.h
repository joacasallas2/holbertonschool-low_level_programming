#ifndef DOG_H
#define DOG_H
#include <stdio.h>

/**
 * struct dog - Define a new type struct dog with the following elements
 * @name: The name
 * @age: The age
 * @owner: The owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
