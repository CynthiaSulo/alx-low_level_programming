#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Print the 1 to 100, multiples of 3 and 5 print Fizz and Buzz respectively
 * Multiples of both 3 and 5 print FizzBuzz
 * Return: Always 0 (Success)
 */
int main(void)
{
	int j;

	for (j = 1; j <= 100; j++)
	{
		if (j % 3 == 0 && j % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (j % 5 == 0 && j % 3 != 0)
		{
			printf(" Buzz");
		}
		else if (j % 3 == 0 && j % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (j == 1)
		{
			printf("%d", j);
		}
		else
		{
			printf(" %d", j);
		}
	}
	printf("\n");

	return (0);
}


