#include<stdio.h>
/**
  * _strncpy -  function that copy a string
  * it will use at most n bytes from src
  * @dest: The pointer to destine string
  * @src: The pointer to source string
  * @n: The number of characters from src to copy
  * Return: A pointer to the resulting string dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *ptr = dest;

	for (i = 0; (i < n) & (src[i] != '\0'); i++)
	{
		ptr[i] = src[i];
	}
	if (n > i)
	{
		ptr[i] = '\0';
	}
	return (ptr);
}

