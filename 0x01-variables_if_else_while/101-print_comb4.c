#include <stdio.h>

/**
 * main - A program to print all possible combination of three digits
 * Return: Always 0
 */

int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 8; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			for (k = 2; k <= 9; k++)
			{
				if (k > j && j > i)
				{	
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if (i < 8 || j < 9)
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
