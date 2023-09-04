#include <stdio.h>

/**
  * main -  prints all possible different combinations of two digits.
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int i, j;

	i = 48;
	while (i < 57)
	{
		j = 49;
		while (j < 58)
		{
			if (i < j)
			{
				putchar(i);
				putchar(j);
				if (i == 56 && j == 57)
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
	}
}

