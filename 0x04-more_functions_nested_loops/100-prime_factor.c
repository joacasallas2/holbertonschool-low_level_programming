#include <stdio.h>

/**
  * main - check the code
  *
  * Return: Always 0 (Success)
  */

void prime_factor(void);

int main(void)
{
	prime_factor();
	return (0);
}


/**
  * prime_factor - program that finds and prints the largest prime factor
  *
  * Return: Nothing (void function)
  */

void prime_factor(void)
{
	long int num, divisor;
	int mod;

	num = 612852475143;
	divisor = 2;
	while (num > 1)
	{
		mod = num % divisor;
		if (mod != 0)
		{
			divisor++;
		}
		else
		{
			num = num / divisor;
			printf("%ld", divisor);
		}
	}
	printf("\n");
}

