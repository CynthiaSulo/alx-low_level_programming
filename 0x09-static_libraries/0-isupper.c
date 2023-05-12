#include "main.h"

/**
 * _isupper - Entry point
 * @c: check c, return 1 if c is uppercase and 0 otherwise.
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
