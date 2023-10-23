/**
 * _puts_recursion - function that prints a string
 * s: The pointer to the string
 * @c: The character to print
 * Return: Nothing (void function)
 */

int _putchar(char c);
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[i]);
	i++;
	_puts_recursion(&s[i]);
}
