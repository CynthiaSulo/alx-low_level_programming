#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcodes of given machine
 * @argc: number of command-line arguments
 * @argv: an array containing the command-line arguments
 * Return: 0 on Success
 */
int main(int argc, char *argv[])
{
	int i, num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02hhx", *((char *)main + i));
		if (i < num_bytes - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
