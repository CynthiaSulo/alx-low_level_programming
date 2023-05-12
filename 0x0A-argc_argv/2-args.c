#include <stdio.h>
#include "main.h"

/**
  * main - a program that prints all arguments it receives.
  * @argc: number of command line arguments
  * @argv: array of arguments
  * Return: 0 (Sucess)
  */
int main(int argc __attribute__((unused)), char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
