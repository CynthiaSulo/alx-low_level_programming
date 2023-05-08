#include "main.h"
/**
 * _memset - function that fills memory with a constant byte.
 * @s: pointer to the memory to be filled
 * @b: the value of the byte to be written
 * @n: the number of bytes to be filled
 * Return: Pointer to the memory s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
