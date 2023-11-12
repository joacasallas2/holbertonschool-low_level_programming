#include "dog.h"
char *_strcpy(char *dest, char *src);
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
	float age2;
	int i;

	new_dog = malloc(sizeof(*new_dog));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	for (i = 0; name[i]; i++)
	{
	}
	name2 = malloc(sizeof(char *) * i);
	if (name2 == NULL)
	{
		return (NULL);
	}
	name2 = _strcpy(name2, name);
	for (i = 0; owner[i]; i++)
	{
	}
	owner2 = malloc(sizeof(char *) * i);
	if (owner2 == NULL)
	{
		return (NULL);
	}
	owner2 = _strcpy(owner2, owner);
	age2 = age;
	new_dog->name = name2;
	new_dog->age = age2;
	new_dog->owner = owner2;
	return (new_dog);
}

/**
 * _strcpy - function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest
 * @dest: The pointer to the buffer to store the string copied
 * @src: The pointer to the string to copy
 * Return: The ponter to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
