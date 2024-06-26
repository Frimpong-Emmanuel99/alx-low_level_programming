#include "main.h"

/**
 * _strncat - A program to concanate strings
 * @dest: The destination pointer
 * @src: The source pointer
 * @n: The parameter
 * Return: The destination pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
