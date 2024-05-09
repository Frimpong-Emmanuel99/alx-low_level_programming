#include <stdio.h>

/**
 * main - A program that prints the size of various datatypes
 * Return: Always return 0
 */

int main(void)
{
	printf("Size of char: %c byte(s)", sizeof(char));
	printf("Size of int: %i byte(s)", sizeof(int));
	printf("Size of long int: %lu byte(s)", sizeof(long int));
	printf("Size of long long int: %lu byte(s)", sizeof(long long int));
	printf("Size of float: %lu byte(s)", sizeof(float));
}
