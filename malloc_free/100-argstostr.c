#include "main.h"
/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: The number of arguments
 * @av: The pointer to the array of arguments
 * Return: A pointer to a new string, or NULL if it fails
 * Return NULL if ac == 0 or av == NULL
 */
char *argstostr(int ac, char **av)
{
	int i, j, num, k;
	char *p;

	num = k = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			num++;
		}
		num++;
	}
	p = malloc(sizeof(char) * num + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			p[k] = av[i][j];
			k++;
		}
		p[k] = '\n';
		k++;
	}
	return (p);
}
