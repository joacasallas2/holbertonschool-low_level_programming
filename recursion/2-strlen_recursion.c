/**
 * _strlen_recursion -  function that returns the length of a string.
 * @s: The pointer to the string
 * Return: The lenght of the string
 */

int _strlen_recursion(char *s)
{
	int i = 0;
	static int len;

	len = 0;
	if (s[i] == '\0')
	{
		return (len);
	}
	_strlen_recursion(&s[i + 1]);
	i++;
	len++;
	return (len);
}
