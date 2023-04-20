#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_numbers - Prints the numbers
* @separator: string to be printed between numbers
* @n: number of integers passed to the function
* @...: variable number of numbers to be printed
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list nums;
unsigned int m;
va_start(nums, n);
for (m = 0; m < n; m++)
{
printf("%d", va_arg(nums, int));
if (m != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(nums);
}
