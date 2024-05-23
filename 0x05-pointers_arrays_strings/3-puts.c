#include "main.h"

/**
 * _puts - A program to print string followed by a new line
 * @str: parameter to print the string
 * Return: void
 */


void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
