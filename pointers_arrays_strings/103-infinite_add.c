/**
 * infinite_add - function that adds two numbers.
 * @n1: The pointer to the first number
 * n2: The pointer to the second number
 * r: The buffer to store the result
 * size_r: The buffer size
 * Return: A pointer to the buffer r
 */

int rec(char *n1);
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, pend, num1, num2, res;

	pend = num1 = num2 = 0;
	i = rec(n1);
	j = rec(n2);
	if ((size_r - 1) < i || (size_r - 1) < j)
		return (0);
	i--;
	j--;
	k = size_r - 1;
	r[k] = '\0';
	k--;
	for (; k >= -1; k--, i--, j--)
	{
		num1 = (n1[i] - 48);
		num2 = (n2[j] - 48);
		if (i < 0)
			num1 = 0;
		if (j < 0)
			num2 = 0;
		res = num1 + num2 + pend;
		pend = 0;
		if (res > 9)
		{
			pend = res / 10;
			res = res % 10;
		}
		r[k] = res + 48;
	}
	if (k <= -1 && res > 0)
		return (0);
	for (i = 0; r[i] == 48; i++)
	{
	}
	for (j = 0; r[i] != '\0'; i++, j++)
	{
		r[j] = r[i];
	}
	r[j] = '\0';
	return (r);
}

/**
 * rec - Function that get the lenght of a string.
 * @n1: The pointer to the string
 * Return: the large
 */
int rec(char *n1)
{
	int large;

	for (large = 0; n1[large]; large++)
	{
	}
	return (large);
}
