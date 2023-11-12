#include "dog.h"
char *_strdup(char *str);
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
	char *name2, *owner2;
	int i;

	new_dog = malloc(sizeof(*new_dog));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	for (i = 0; name[i]; i++)
	{
	}
	name2 = (char *)malloc(sizeof(char) * (i + 1));
	if (name2 == NULL)
	{
		return (NULL);
	}
	name2 = _strdup(name);
	for (i = 0; owner[i]; i++)
	{
	}
	owner2 = (char *)malloc(sizeof(char) * (i + 1));
	if (owner2 == NULL)
	{
		return (NULL);
	}
	owner2 = _strdup(owner);
	new_dog->name = name2;
	new_dog->age = age;
	new_dog->owner = owner2;
	return (new_dog);
}

/**
 * _strdup - function that returns a pointer to a newly allocated
 * space in memory
 * @str: The pointer to the string given
 * Return: pointer to the newly space allocated
 */
char *_strdup(char *str)
{
	int i;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
	}
	p = (char *)malloc(sizeof(char) * i + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		p[i] = str[i];
	}
	return (p);
}
