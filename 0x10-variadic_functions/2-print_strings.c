#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_strings - Prints strings, followed by a new line.
* @separator: string to be printed between the strings.
* @n: number of strings passed to the function.
* @...: variable number of strings to be printed.
*
* Description: If separator is NULL, it is not printed.
* if one of the strings is NULL, (nil) is printed instead.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list strings;
char *str;
unsigned int m;
va_start(strings, n);
for (m = 0; m < n; m++)
{
str = va_arg(strings, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
if (m != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(strings);
}

