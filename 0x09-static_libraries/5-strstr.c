#include "main.h"
/**
 * _strstr -a function that locates a substring.
 * @haystack: input parameter
 * @needle: input parameter
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *p = needle;

		while (*h == *p && *p != '\0')
		{
			h++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}
