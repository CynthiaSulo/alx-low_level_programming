#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
#include <string.h>
/**
 * check_num - a function that checks if the string has digit
 * @str: array string
 * Return: Always 0 (Success)
*/
int check_num(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}

		count++;
	}
	return (1);
}
/**
 * main - a function that prints the name of the program
 * @argc: number of command line arguments present
 * @argv: Arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;
	int str_to_int;
	int sum = 0;

	i = 1;
	while (i < argc)
	{
		if (check_num(argv[i]))

		{
			str_to_int = atoi(argv[i]);
			sum = sum + str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}

		i++;
	}

	printf("%d\n", sum);

	return (0);
}
