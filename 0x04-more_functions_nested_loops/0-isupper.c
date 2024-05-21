#include "main.h"

/**
 * _isupper - The function to print the upper letters
 * @c: The character checker
 * Return: 1 if c is upper and 0 if c is otherwise
 */

int _isupper(int c)
{
	int c;

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
