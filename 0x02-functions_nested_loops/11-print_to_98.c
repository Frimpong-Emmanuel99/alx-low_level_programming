#include "main.h"

/**
 * print_to_98 - Entry point
 * @n: the parameter checker
 * Return:
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			_putchar(i);
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(i);
			}
		}
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			if (i != 98)
			{
				_putchar(' ');
				_putchar(',');
			}
		}
	}
	_putchar('\n');
}
