#include "main.h"

/**
 * _strcpy - A function to copy a string from src to dest
 * @dest: The destination to copy to
 * @src: The source to copy the string from
 * Return: returns the copied string from the destination
 */

char *_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (dest);
}
