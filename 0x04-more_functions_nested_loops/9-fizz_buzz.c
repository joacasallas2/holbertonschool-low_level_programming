#include <stdio.h>

/**
  * main - Check the fizz_buzz function code
  *
  * Return: Always 0 (Success)
  */

void fizz_buzz(void);

int main(void)
{
	fizz_buzz();

	return (0);
}

/**
  * fizz_buzz - function that prints the numbers from 1 to 100
  * for multiples of three print Fizz instead of the number
  * for the multiples of five print Buzz
  * For numbers which are multiples of both three and five print FizzBuzz
  * Return: Nothing (void function)
  */

void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", i);
	}
	printf("\n");
}

