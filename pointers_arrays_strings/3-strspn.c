/**
 * _strspn - function that gets the length of a prefix substring
 * @s: The pointer to the substring
 * @accept: The pointer to the substring accepted
 * Return: The number of bytes in s which consist only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int len = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == accept[0])
		{
			if (accept[0] == ' ')
			{
				continue;
			}
			break;
		}
	}
	if (s[i - 1] != ' ')
	{
		for (; s[i] != ' ' && i > 0; i--)
		{
		}
	}
	for (; s[i] != ' ' && s[i] != '\0'; i++)
	{
		len++;
	}
	return (len - 1);
}
