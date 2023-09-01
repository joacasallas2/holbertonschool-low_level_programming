#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
  * main - program that prints a string to the standard error
  *
  * Return: 1 (Success)
  */
int main(void)
{
	char str[60];

	strcpy(str, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	write(2, str, 60);
	return (1);
}
