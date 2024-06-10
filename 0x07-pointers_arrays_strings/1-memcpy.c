#include "main.h"
#include <stdio.h>


/**
 * _memcpy - A function to copy memory
 * @dest: The destination pointer
 * @src: The source pointer
 * @n: The nth number to be ckecked
 *
 * Return: Returns the destination pointer
 */



char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;
	char *s = src;
	
	while (n-- > 0)
	{
		*ptr++ = *s++;
	}
	return (dest);
}

