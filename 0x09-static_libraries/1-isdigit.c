#include "main.h"

/**
 * _isdigit - Entry point
 * @c: Checks for a digit, 0 to 9, returns 1 if c is digit
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
