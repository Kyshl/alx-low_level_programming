#include <stdio.h>
/**
 * you should produce the exact same output as in the example
 * Warnings are allowed
 *
 * Your program should return 0
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("size of a char: %1d byte(s)\n", sizeof(c));
	printf("size of a int: %1d byte(s)\n", sizeof(i));
	printf("size of a long: %1d byte(s)\n", sizeof(li));
	printf("size of a long long: %1d byte(s)\n", sizeof(lli));
	printf("size of a float: %1d byte(s)\n", sizeof(f));
	return (0);
}
