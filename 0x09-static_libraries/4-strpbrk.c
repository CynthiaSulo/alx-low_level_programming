#include "main.h"
/**
 * _strpbrk - a function searches a string
 * for any of a set of bytes.
 * @s: input parameter
 * @accept: input parameter
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
		int b;

		while (*s)
		{
			for (b = 0; accept[b]; b++)
			{
				if (*s == accept[b])
					return (s);
			}
			s++;
		}

		return ('\0');
}
