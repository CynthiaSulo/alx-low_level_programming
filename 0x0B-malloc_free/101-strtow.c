#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * count_words - Counts the number of words in a string
 * @str: The string to count words from
 * Return: The number of words in the string
 */
int count_words(char *str)
{
	int count = 0, i = 0;

	if (str == NULL)
		return (0);

	while (isspace(str[i]))
		i++;

	if (str[i] == '\0')
		return (0);

	while (str[i])
	{
		while (isspace(str[i]))
			i++;

		if (str[i])
			count++;

		while (str[i] && !isspace(str[i]))
			i++;
	}

	return (count);
}
/**
 * strtow - Splits a string into words
 * @str: The string to split
 * Return: An array of strings (words) or NULL if str is NULL or ""
 */
char **strtow(char *str)
{
	char **words;
	int count = 0, i = 0, j, k, len;

	if (str == NULL || *str == '\0')
		return (NULL);

	count = count_words(str);

	words = malloc(sizeof(char *) * (count + 1));

	if (words == NULL)
		return (NULL);

	for (j = 0; j < count; j++)
	{
		while (isspace(str[i]))
			i++;

		len = 0;

		while (str[i + len] && !isspace(str[i + len]))
			len++;

		words[j] = malloc(sizeof(char) * (len + 1));

		if (words[j] == NULL)
		{
			for (k = 0; k < j; k++)
				free(words[k]);
			free(words);
			return (NULL);
		}

		strncpy(words[j], str + i, len);
		words[j][len] = '\0';
		i += len;
	}
	words[count] = NULL;

	return (words);
}
