/**
 * factorial - function that returns the factorial of a given number.
 * @n: The number to calculate the factorial
 * Return: The factorial number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
