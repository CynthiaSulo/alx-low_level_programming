#include "main.h"
/**
 * reverse_array - a function reverses the content
 * of an array of integers
 * @a: pointer to an array
 * @n: number of elements of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int t;
	int i;

	n = n - 1;
	i  = 0;
	while (i <= n)
	{
		t = a[i];
		a[i++] = a[n];
		a[n--] = t;
	}
}
