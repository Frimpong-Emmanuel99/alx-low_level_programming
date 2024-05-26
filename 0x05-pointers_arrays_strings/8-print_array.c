#include "main.h"
#include <stdio.h>

/**
* print_array - A function to print an array
* @a: The parameter to be checked
* @n: The secend parameter to be checked
* Return: void
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%i", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
