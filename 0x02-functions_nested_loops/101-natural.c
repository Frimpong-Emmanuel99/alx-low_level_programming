#include <stdio.h>

/**
 * main - Entry point
 * Return: return 0
 */

int main(void)
{
	int i, result;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			result = result + i;
		}
	}
	printf("%d ", result);
	return (0);
}
