#include <stdio.h>
#include <stdlib.h>
/**
 * print_opcodes - prints the opcodes
 * @a: an address 
 * @n: number of bytes to print
 * Return: nothing.
 */
void print_opcodes(char *a, int n)
{
	int y;

	for (y = 0; y < n; y++)
	{
		printf("%.2hhx", a[y]);
		if (y < n - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
}
/**
 * main - main function
 * @argc: argc int
 * @argv: argv char
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	int ae;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	ae = atoi(argv[1]);
	if (ae < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, ae);

	return (0);
}

