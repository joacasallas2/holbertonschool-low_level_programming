/**
 * infinite_add - function that adds two numbers.
 * @n1: The pointer to the first number
 * @n2: The pointer to the second number
 * @r: The buffer to store the result
 * @size_r: The buffer size
 * Return: A pointer to the result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i;
	long int mult, num1, num2, res, div;

	num1 = num2 = res = 0;

	for (i = 1, mult = 1; n1[i]; i++, mult *= 10)
	{
	}
	for (i = 0; mult > 1; i++, mult /= 10)
	{
		num1 += (n1[i] - 48) * mult;
	}
	num1 += n1[i] - 48;
	for (i = 1, mult = 1; n2[i]; i++, mult *= 10)
	{
	}
	for (i = 0; mult > 1; i++, mult /= 10)
	{
		num2 += (n2[i] - 48) * mult;
	}
	num2 += n2[i] - 48;
	res = num1 + num2;
	for (div = 1; (res / div) > 1; div *= 10)
	{
	}
	for (i = 0; div > 1; i++, div /= 10)
	{
		r[i] = 48 + (res / div) % 10;
	}
	r[i] = 48 + (res / div) % 10;
	if ((size_r - 1) <= i)
		return (0);
	else
		return (r);
}
