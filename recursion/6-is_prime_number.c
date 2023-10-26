/**
 * is_prime_number - function that returns 1 if the input integer
 * is a prime number
 * @n: The number
 * @i: the runner number
 * Return: 1 if is prime, otherwise 0
 */
int prime(int n, int i);
int is_prime_number(int n)
{
	int i = prime(n, 2);

	return (i);
}

/**
 * prime - function that returns 1 if the input integer
 * is a prime number
 * @n: The number given
 * @i: the runner number
 * Return: 1 if is prime, otherwise 0
 */
int prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (i < n)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	if (i > n)
	{
		return (1);
	}
	return (prime(n, i + 1));
}
