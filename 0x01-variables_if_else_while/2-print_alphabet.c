#include <stdio.h>

/**
  * main - program that prints the alphabet in lowercase
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
	return (0);
}

