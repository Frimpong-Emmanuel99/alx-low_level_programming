#include "main.h"
#include <stdio.h>

/**
 * string_toupper - A function to convert string to upper case letters
 * @s: The parameter to be passed
 * Return: Returns the uppercase
 */

char *string_toupper(char *s)
{
	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
		{
			*s = *s - 32;
		}
		s++;
		return (s);
	}
}
