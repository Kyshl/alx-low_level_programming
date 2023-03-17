#include <stdio.h>
/**
 * main - print if the number is postive, zero, or negative
 *
 * Description: in betty coding style
 * this program prints "the alphabet in lowercase, followed by a new line
 * Return: 0
 */
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
	putchar(ch);
}
putchar('\n');
return (0);
}
