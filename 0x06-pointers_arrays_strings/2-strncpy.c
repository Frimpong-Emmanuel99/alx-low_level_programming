#include "main.h"


/**
 * _strncpy - A function to copy string
 * @dest: The destination pointer
 * @src: The source pointer
 * @n: The parameter to be checked
 *
 * Return: Return the destination pointer
 */


char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (n > 0 && *src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*ptr = '\0';
		ptr++;
		n--;
	}
	return (dest);
}
