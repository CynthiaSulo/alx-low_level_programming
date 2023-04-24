#include <stdio.h>
/**
  *main - 'print all possible combinations of single-digit numbers'
  *Return: always 0 (Sucess)
  */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n == 57)
		{
			continue;
			putchar(',');
			putchar(' ');
		}
		putchar('\n');
		return (0);
	}
}


