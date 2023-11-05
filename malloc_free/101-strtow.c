#include "main.h"
/**
 * strtow - function that splits a string into words
 * @str: The pointer to the string
 * Return: A pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	int i, j, k, l, numStr;
	char **ptr;

	j = k = l = numStr = 0;
	if (str[0] == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		while (str[i] == ' ')
		{
			i++;
		}
		if (str[i] != ' ' && str[i] != '\0')
		{
			numStr++;
			for (; str[i] != ' ' && str[i]; i++)
			{
			}
		}
		if (str[i] == '\0')
		{
			break;
		}
	}
	if (str == NULL || numStr == 0)
	{
		return (NULL);
	}
	ptr = (char **)malloc(sizeof(char *) * (numStr + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		while (str[i] == ' ')
		{
			i++;
		}
		if (str[i] != ' ' && str[i] != '\0')
		{
			l = i;
			for (; str[i] != ' ' && str[i] != '\0'; i++, j++)
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
			j = 0;
			for (; str[l] != ' ' && str[l] != '\0'; l++, j++)
			{
				ptr[k][j] = str[l];
			}
			ptr[k][j] = '\0';
			j = 0;
			k++;
			if (k == numStr)
			{
				ptr[k] = NULL;
				break;
			}
		}
	}
	return (ptr);
}
