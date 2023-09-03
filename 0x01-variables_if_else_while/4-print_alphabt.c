#include <stdio.h>

/**
  * main - Write a program that prints the alphabet in lowercase
  * Print all the letters except q and e
  *
  * Return: Always 0 (success)
  */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if ((i == 113) | (i == 101))
		{
			continue;
		}
		putchar(i);
	}
	putchar('\n');
	return (0);
}

