#include "main.h"
#include <stdio.h>


/**
 * _memset - A function to fill memory space
 * @s: The pointer to be returned
 * @b: the parameter to be checked
 * @n: The number
 *
 * Return: returns s
 */



char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n-- > 0)
	{
		*ptr++ = b;
	}
	return (s);
}
