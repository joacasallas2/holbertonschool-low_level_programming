/**
 * _memset -  function that fills memory with a constant byte
 * @n: Number of bytes to fill
 * @s: Pointer to the memory area
 * @b: the Constant byte
 * Return: A pointer to the memory area (s)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; (i < n); i++)
	{
		s[i] = b;
	}
	return (s);
}
