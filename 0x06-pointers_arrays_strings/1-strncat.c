/**
  * _strncat -  function that concatenates two strings
  * it will use at most n bytes from src
  * @dest: The pointer to destine string
  * @src: The pointer to source string
  * @n: The number of characters from src to concatenate
  * Return: A pointer to the resulting string dest
  */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; (j < n) & (src[j] != '\0'); j++, i++)
	{
		ptr[i] = src[j];
	}
	return (ptr);
}

