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
 * word_length - Computes the length of a word
 * @str: The word to compute length for
 * Return: The length of the word
 */
int word_length(char *str)
{
        int len = 0;

        while (str[len] && !isspace(str[len]))
                len++;

        return (len);
}

/**
 * strtow - Splits a string into words
 * @str: The string to split
 * Return: A NULL-terminated array of strings, or NULL on failure
 */
char **strtow(char *str)
{
        int i, j, k, n, word_count;
        char **words;

        if (str == NULL || str[0] == '\0')
                return (NULL);

        word_count = count_words(str);
        if (word_count == 0)
                return (NULL);

        words = malloc((word_count + 1) * sizeof(char *));
        if (words == NULL)
                return (NULL);

        i = 0;
        j = 0;
        while (str[i])
        {
                while (isspace(str[i]))
                        i++;

                if (str[i] == '\0')
                        break;

                n = word_length(&str[i]);
                words[j] = malloc((n + 1) * sizeof(char));
                if (words[j] == NULL)
                {
                        while (--j >= 0)
                                free(words[j]);
                        free(words);
                        return (NULL);
                }

                for (k = 0; k < n; k++)
                        words[j][k] = str[i + k];
                words[j][k] = '\0';

                i += n;
                j++;
        }

        words[j] = NULL;
        return (words);
}
