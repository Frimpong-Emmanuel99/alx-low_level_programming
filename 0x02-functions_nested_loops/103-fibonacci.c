#include <stdio.h>

/**
 * main - A program to print fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int i, result, fib1, fib2, next;

	fib1 = 1;
	fib2 = 2;

	for (i = 1; i <= 33; ++i)
	{
		if (fib1 < 4000000 && (fib1 % 2) == 0)
		{
			result = result + fib1;
		}
		next = fib1 + fib2;
		fib1 = fib2;
		fib2 = next;
	}
	printf("%d\n", result);
	return (0);
}
