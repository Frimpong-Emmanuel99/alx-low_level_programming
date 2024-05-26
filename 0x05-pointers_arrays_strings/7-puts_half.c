#include "main.h"

/**
* puts_half - A program to print half of a string
* @str: the parameter to be printed
* Return: void
*/

void puts_half(char *str)
{
	int i, half, n;

	half = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		half++;
	}

	n = (half / 2);

	if ((half % 2) == 1)
	{
		n = (half - 1) / 2;
	}
	for (i = n; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
