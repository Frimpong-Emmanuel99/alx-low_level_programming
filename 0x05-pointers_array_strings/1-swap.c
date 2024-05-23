#include "main.h"

/**
 * swap_int - A function to swap integers
 * @a: The first int
 * @b: The second int
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
