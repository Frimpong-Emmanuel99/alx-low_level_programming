#include <stdio.h>

/**
 * main - A program to print all possible combinations of two digits
 * Return: Always 0
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 8; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if ((i < 8) || (j < 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
