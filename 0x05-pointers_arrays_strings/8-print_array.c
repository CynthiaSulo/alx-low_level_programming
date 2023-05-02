#include "main.h"

/**
  * print_array - prints n elements of an array of integers
  * where n is the number of elements of the array to be printed
  * Numbers must be separated by comma, followed by a space
  * @n: number of elemets to be printed
  * @a: array name
  */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < (n - 1); j++)
	{
		printf("%d, ", a[j]);
	}
	if (j == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
