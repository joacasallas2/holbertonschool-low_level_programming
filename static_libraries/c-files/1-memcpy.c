/**
 * _memcpy -  function that copies memory area
 * @n: The number of bytes to copy from memory area
 * @src: The memory area source
 * @dest: The memory area destine
 * Return: The pointer to memory area (dest)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
