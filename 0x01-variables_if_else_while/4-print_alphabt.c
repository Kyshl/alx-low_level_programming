#include <stdio.h>
/**
 * main - Print all the letters except q and e
 * Return: 0 if successful
 */
int main(void)
{
char lowerCase, no, not;

no = 'e';
not = 'q';

for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
{
if (lowerCase != no && lowerCase != not)
putchar(lowerCase);
}
putchar('\n');
return (0);
}
