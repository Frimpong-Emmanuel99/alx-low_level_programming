#include "main.h"

/**
 * print_alphabet - Entry point
 * Return: Aways return 0
 *
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
