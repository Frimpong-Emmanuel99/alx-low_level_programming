#include "main.h"
#include <stdio.h>



/**
 * _strcmp - A function to compare strings
 * @s1: The first string
 * @s2: The second string
 * Return: Returns the difference in the string
 */


int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
