/**
  * _strcat -  function that concatenates two strings
  * and then adds a terminating null byte
  * @dest: The pointer to destine string
  * @src: The pointer to source string
  * Return: A pointer to the resulting string dest
  */

char *_strcat(char *dest, char *src)
{
	int i, j;
	char *ptr = dest;

	for (i = 0; dest[i] != '\0'; i++)
	{
		ptr[i] = dest[i];
	}
	for (j = 0; src[j] != '\0'; j++, i++)
	{
		ptr[i] = src[j];
	}
	return (ptr);
}

