/**
  * _isalpha - checks for alphabetic character.
  * @c: The character to check
  * Return: 1 if c is a letter or 0 otherwise
  */
int _isalpha(int c)
{

	if ((c < 65) || (c > 90 && c < 97) || (c > 122))
		return (0);
	else
		return (1);
}

