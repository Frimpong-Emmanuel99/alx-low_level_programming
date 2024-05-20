#include "main.h"


/**
 * times_table - Entry point
 *
 */

void times_table(void)
{
	int row, col, product;

	for (row = 0; row <= 9; row++)
	{
		_putchar(',');
		_putchar(' ');
	}
	for (col = 0; col <= 9; col++)
	{
		if (col != 0)
		{
			_putchar(',');
			_putchar(' ');
		}
		if (product < 10)
		{
			if (col != 0)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
