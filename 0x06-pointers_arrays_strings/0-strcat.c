#include "main.h"

/**
 * _strcat - A program to concatenate strings
 * @dest: The destination pointer
 * @src: The source pointer
 * Return: return the destination pointer
 */


char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		*ptr++;
	}
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (dest);
}

