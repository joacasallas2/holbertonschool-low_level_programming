#include <stdio.h>

/**
  * main - prints all possible different combinations of three digits.
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int i, j, k;

	i = 48;
	while (i < 56)
	{
		j = 49;
		while (j < 57)
		{
			k = 50;
			while (k < 58)
			{
				if (i < j && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i == 55 && j == 56 && k == 57)
					{
						putchar('\n');
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
				k++;
			}
			j++;
		}
		i++;
	}
	return (0);
}

