#include "main.h"
#include <stdio.h>


/**
 * reverse_array - A function to reverse content in an array
 * @a: The array to be reversed
 * @n: The content of the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;
	int temp;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;

		start++;
		end--;
}
