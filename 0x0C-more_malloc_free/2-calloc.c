#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills the first n bytes of memory with a constant byte
 * @s: pointer to the memory area
 * @b: char to copy
 * @n: the number of bytes to be set
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * *_calloc - allocates memory for an array and sets it to zero
 * @nmemb: the number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory, NULL if fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
