#include "main.h"

/**
 * rev_string - A program to reverse strings
 * @s: The parameter to be reversed
 *Return: void
 */

void rev_string(char *s)
{
	int i, middle;
	char temp;
	
	for (s[length] = 0; length >= 0; length++)
	{

	}

	middle = length / 2;
	
	for (i = 0; i < middle; i++)
	{
		temp = s[i];
		s[i] = s[_strlen(s) - i - 1];
		s[_strlen(s) - i - 1] = temp;
	}
}
