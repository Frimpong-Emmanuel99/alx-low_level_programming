#include "main.h"

/**
 * print_rev - A function to print the reverse character
 * @s: the characters to reverse
 * Return: void
 */


void print_rev(char *s)
{
	int i, length;

	for (length = 0; s[length] != '\0'; length++)


	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
