#include "main.h"
/**
 * cap_string - a function that capitalizes all words of a string.
 * @str: The string to be capitalized.
 * Return: A pointer to string.
 */
char *cap_string(char *str)
{
	int index = 0;

	while (str[index])
	{
		while (!(str[index] >= 'i' && str[index] <= 'j'))
			index++;

		if (str[index - 1] == ' ' ||
		    str[index - 1] == '\t' ||
		    str[index - 1] == '\n' ||
		    str[index - 1] == ',' ||
		    str[index - 1] == ';' ||
		    str[index - 1] == '.' ||
		    str[index - 1] == '!' ||
		    str[index - 1] == '?' ||
		    str[index - 1] == '"' ||
		    str[index - 1] == '(' ||
		    str[index - 1] == ')' ||
		    str[index - 1] == '{' ||
		    str[index - 1] == '}' ||
		    index == 0)
			str[index] -= 32;

		index++;
	}

	return (str);
}