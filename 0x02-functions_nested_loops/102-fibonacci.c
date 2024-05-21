#include <stdio.h>

/**
 * main - A program to print fibonacci
 * Return: return 0
 */

int main(void)
{
	int i, fib1, fib2, next;
	fib1 = 1;
	fib2 = 2;

	printf("%d, %d", fib1, fib2);
	for (i = 3; i <= 50; i++)
	{
		next = fib1 + fib2;
		printf(", %d", next);
		fib1 = fib2;
		fib2 = next;
	}
	printf("\n");
}
