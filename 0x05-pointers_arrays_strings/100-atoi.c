/**
  * _atoi -  function that convert a string to an integer
  * @s: The Pointer to the string
  * Return: the number or 0 if are not numbers
  */
int _atoi(char *s)
{
	int index, len, mul, number, sign, found;

	found = 0;
	mul = 1;
	sign = 1;
	number = 0;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] < 48 || s[index] > 57)
		{
			continue;
		}
		else
		{
			found = 1;
			break;
		}
	}
	if (found == 0)
		return (0);
	if (index != 0)
		if (s[index - 1] == '-')
			sign = -1;
	for (len = index; s[len] != '\0'; len++)
	{
		if (s[len] < 48 || s[len] > 57)
			break;
		mul *= 10;
	}
	mul = mul / 10;
	for (; index <= len; index++, mul /= 10)
		number += (((s[index] - '0') * mul) * sign);
	return (number);
}

