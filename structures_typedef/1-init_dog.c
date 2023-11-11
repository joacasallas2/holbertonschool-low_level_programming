#include "dog.h"


/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: pointer to the struct
 * @name: pointer to the name
 * @age: The age
 * @owner: Pointer to the owner
 * Return: Nothing (void function)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->age = age;
	d->name = name;
	d->owner = owner;
}
