#include "main.h"
/**
 * strtow - function that splits a string into words
 * @str: The pointer to the string
 * Return: A pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	int i, j, k, numStr;
	char **ptr;

	numStr = j = k = 0;
	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
			numStr++;
	}
	ptr = (char **)malloc(sizeof(char *) * (numStr + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
		{
			i++;
			for (; str[i] != ' '; i++, j++)
			{
			}
			ptr[k] = (char *)malloc(sizeof(char) * (j + 1));
			if (ptr[k] == NULL)
			{
				for (; k >= 0; k--)
				{
					free(ptr[k]);
				}
				free(ptr);
				return (NULL);
			}
			k++;
			j = 0;
			i--;
		}
	}
	k = j = 0;
	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
		{
			i++;
			for (; str[i] != ' '; i++, j++)
			{
				ptr[k][j] = str[i];
			}
			ptr[k][j] = '\0';
			k++;
			j = 0;
			i--;
		}
	}
	ptr[k] = NULL;
	return (ptr);
}
