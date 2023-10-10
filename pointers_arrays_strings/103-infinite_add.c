/**
 * infinite_add - function that adds two numbers.
 * n1: The pointer to the first number
 * @n2: The pointer to the second number
 * r: The buffer to store the result
 * size_r: The buffer size
 * Return: A pointer to the result
 */

int mult(char *n2);
int num(char *n1, int mult1);

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i;
	long int mult1, mult2, num1, num2, res, div;

	num1 = num2 = res = 0;
	mult1 = mult(n1);
	num1 = num(n1, mult1);
	mult2 = mult(n2);
	num2 = num(n2, mult2);
	res = num1 + num2;
	for (div = 1; (res / div) > 1; div *= 10)
	{
	}
	for (i = 0; div > 1; i++, div /= 10)
	{
		r[i] = 48 + (res / div) % 10;
	}
	r[i] = 48 + (res / div) % 10;
	if (i >= (size_r - 1))
	{
		return (0);
	}
	return (r);
}

/**
 * mult - function that get the mult of a number.
 * @n2: The pointer to the number
 * Return: the mult number
 */

int mult(char *n2)
{
	long int i, mult;

	for (i = 1, mult = 1; n2[i]; i++, mult *= 10)
	{
	}
	return (mult);
}

/**
 * num - function that get the int of a char.
 * @n1: The pointer to the number
 * @mult1: mult
 * Return: the integer
 */
int num(char *n1, int mult1)
{
	long int num1 = 0;
	int i;

	for (i = 0; mult1 > 1; i++, mult1 /= 10)
	{
		num1 += (n1[i] - 48) * mult1;
	}
	num1 += n1[i] - 48;
	return (num1);
}
