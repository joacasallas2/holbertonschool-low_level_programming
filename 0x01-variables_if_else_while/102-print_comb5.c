#include <stdio.h>

/**
  * main - prints all possible combinations of two two-digit numbers.
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int i, j, k, l;

	i = 48;
	while (i < 58)
	{
		j = 48;
		while (j < 58)
		{
			k = 48;
			while (k < 58)
			{
				l = 48;
				while (l < 58)
				{
					if (i >= k && j >= l)
						l++;
					if (i > k)
						break;
					if (i == k && j >= l)
						continue;
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (i == 57 && j == 56 && k == 57 && l == 57)
					{
						putchar('\n');
						j++;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
	return (0);
}
