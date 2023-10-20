/**
 * _strspn - function that gets the length of a prefix substring
 * @s: The pointer to the substring
 * @accept: The pointer to the substring accepted
 * Return: The number of bytes in s which consist only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j, check;
	unsigned int len = 0;

	for (i = 0; s[i]; i++)
	{
		check = 0;
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				check = 1;
			}
		}
		if (check == 0)
		{
			return (len);
		}
	}
	return (len);
}
