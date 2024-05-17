#include "main.h"

/**
 * print_last_digit - A function to print the last digit
 * @n: The digit to check
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int last_digit;
	
	if (n < 0)
		last_digit = (n * -1) % 10;
	else
		last_digit  = n % 10;
	return (last_digit);
}
