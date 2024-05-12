#include <stdio.h>

/**
 * main - A program that print
 * All possible combinations of two two digits numbers
 * Return: Always 0
 */

int main(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = i; k <= i; ++k)
			{
				for (l = j; l <= j; ++l)
				{
					putchar(i + '0');
					putchar(k + '0');
					putchar(j + '0');
					putchar(l + '0');

					if (!(i == 9 && j == 9 && k == 9 && l == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
