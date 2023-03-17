#include <stdio.h>
/**
 * main -prints all single digit numbers
 *
 * Description: using the main function
 * this program prints "all singles digit numbers
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
