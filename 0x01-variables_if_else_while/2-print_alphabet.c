#include <stdio.h>

/**
  * main - program that prints the alphabet in lowercase
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

