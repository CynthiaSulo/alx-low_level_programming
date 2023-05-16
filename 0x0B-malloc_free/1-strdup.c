#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * _strdup - a function that returns a pointer to a newly allocated space
  * in memory which contains a copy of the string given as a parameter
  * @str: char
  * Return: a pointer to the duplicated sting if success, otherwise NULL
*/
char *_strdup(char *str)
{
	char *new_str;
	int i;
	int j;

	if (str == NULL)
		return (NULL);
	i = 0;

	while (str[i] != '\0')
		i++;

	new_str = malloc(sizeof(char) * (i + 1));

	if (new_str == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		new_str[j] = str[j];

	return (new_str);
}

