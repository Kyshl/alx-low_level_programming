#include <stdio.h>
/**
 * main -print all possible combinations
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int i;

for (i = 48; i < 58; i++)
{
putchar(i);
if (i != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
