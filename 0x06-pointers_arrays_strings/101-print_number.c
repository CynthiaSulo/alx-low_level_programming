#include "main.h"
/**
 * print_number - Add one line to this code
 * so that the program prints a[2] = 98
 * @n: integer value parameter
 * Return: 0
 */

void print_number(int n)
{
	unsigned int n1;

	n1 = n;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}

	if (n1 / 10 != 0)
	{
		print_number(n1 / 10);
	}
	_putchar((n1 % 10) + '0');
}
