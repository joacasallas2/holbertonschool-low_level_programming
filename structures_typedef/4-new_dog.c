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

	new_dog = malloc(sizeof(*new_dog));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog->age = age;
	new_dog->name = _strdup(name);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = _strdup(owner);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
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
	p = (char *)malloc(sizeof(char) * (i + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		p[i] = str[i];
	}
	p[i] = '\0';
	return (p);
}
