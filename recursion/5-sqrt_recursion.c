/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: The number
 * @i: the base number
 * Return: The natural square root of the number
 */
int sqrt_base(int i, int n);
int _sqrt_recursion(int n)
{
	int i = sqrt_base(1, n);

	return (i);
}

/**
 * sqrt_base - function that returns the natural square root of a number
 * @n: The number
 * @i: the base number
 * Return: The natural square root of the number
 */
int sqrt_base(int i, int n)
{
	if (n == 1)
	{
		return (1);
	}
	if (i > n / 2)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (sqrt_base(i + 1, n));
}
