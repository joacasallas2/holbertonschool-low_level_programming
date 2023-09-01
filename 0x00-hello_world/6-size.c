#include <stdio.h>
#include <string.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;
	char str[16];

	strcpy(str, "Size of ");
	printf("%s a char: %lu byte(s)\n", str, sizeof(c));
	printf("%s an int: %lu byte(s)\n", str, sizeof(i));
	printf("%s a long int: %lu byte(s)\n", str, sizeof(li));
	printf("%s a long long: %lu byte(s)\n", str, sizeof(lli));
	printf("%s a float: %lu byte(s)\n", str, sizeof(f));

	return (0);
}

