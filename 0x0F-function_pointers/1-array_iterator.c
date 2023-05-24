#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - executes a function on each array element
 * @array: the array to iterate over
 * @size: the size of an array
 * @action: Function pointer to the function to execute on each element
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
