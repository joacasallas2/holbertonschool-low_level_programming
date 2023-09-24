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
	return (dest);
}

