#include "dog.h"

/**
 * new_dog -  function that creates a new dog.
 * @name: The name
 * @age: The age
 * @owner: The owner
 * Return: A pointer to the struct with the new data
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(*new_dog));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_dog);
}
