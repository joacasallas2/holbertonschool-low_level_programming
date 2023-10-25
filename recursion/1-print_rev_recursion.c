/**
 * _print_rev_recursion -  function that prints a string in reverse
 * s: The pointer to the string
 * @c: The character to print
 * Return: Nothing (void function)
 */
int _putchar(char c);
void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		return;
	}
	_print_rev_recursion(&s[i + 1]);
	_putchar(s[i]);
}
