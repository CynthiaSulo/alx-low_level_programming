#include "main.h"

/**
 * factorial - a function that returns the factorial of a number
 * @n: input, number to return the factorial from
 * Return: -1 to indicate an error
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
