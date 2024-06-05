#include "main.h"
#include <stdio.h>

/**
 * string_toupper - A function to convert string to upper case letters
 * @s: The parameter to be passed
 * Return: Returns the uppercase
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}

	return (s);
}
