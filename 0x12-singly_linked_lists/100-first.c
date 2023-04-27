#include <stdio.h>
void go(void) __attribute__ ((constructor));
/**
 * go - prints a sentence before the main
 * function is executed
 */
void go(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}





