#include "main.h"

/**
 * print_triangle - A program that prints a triangle
 * @size: size of the triangle to be printed
 * Return: Return 0
 */

void print_triangle(int size)
{
  
	if (size <= 0)
	{
    		_putchar('\n');
  	} 
  	else
  	{
    		int i, j;
    
    		for (i = 0; i <= size; i++)
    		{
      			for (j = i; j < size; j++)
      			{
        			_putchar(' ');
      			}
      			for (j = 1; j <= i; j++)
      			{
        			_putchar('#');
      			}
      			_putchar('\n');
    		}
  	}
}
