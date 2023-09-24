/**
  * puts_half -  function that prints half of a string, followed by a new line.
  * str: pointer to the string to print
  * @c: character to print
  * Return: Nothing, (void function)
  */

int _putchar(char c);

void puts_half(char *str)
{
	int i, large;

	for (large = 0; str[large] != '\0'; large++)
	{
	}
	if (large % 2 == 1)
	{
		large = large + 1;
	}
	for (i = (large / 2); str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

