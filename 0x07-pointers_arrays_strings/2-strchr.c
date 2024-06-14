#include "main.h"
#include <stdio.h>

/**
 * _strchr - A function to check for a character
 * @s: The pointer to check
 * @c: The character to check
 *
 * Return: 1
 */


char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
}

