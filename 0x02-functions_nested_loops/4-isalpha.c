#include "main.h"

/**
 * _isalpha - entry point
 * @c: the character checker
 * Return: 1 if c is a letter or 0
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
