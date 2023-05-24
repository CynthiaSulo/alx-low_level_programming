#include <stddef.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer in an array
 * @array: the array to search
 * @size: number of elements in array
 * @cmp: pointer to the function
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
