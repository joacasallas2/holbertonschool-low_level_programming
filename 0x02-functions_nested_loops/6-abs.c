/**
  * _abs - computes the absolute value of an integer
  * @c: The character to print
  * @i: The integer to compute the absolute value
  * Return: The absolute value
  */
int _putchar(char c);

int _abs(int i)
{
	if (i < 0)
		i = i * -1;
	return (i);
}

