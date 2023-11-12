#include "dog.h"
/**
 * free_dog - function that frees dogs.
 * @d: The pointer to the struct to free
 * Return: Nothing (void function)
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
