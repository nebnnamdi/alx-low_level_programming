#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sum all arguements
 * @n: number of arguements
 * Return: 0 if n is 0 or return sum
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list strings;
unsigned int i;
char *ptr;

va_start(strings, n);
for (i = 0; i < n; i++)
{
ptr = va_arg(strings, char *);
if (ptr == NULL)
{
printf("(nil)");
}
else
{
printf("%s", ptr);
if (i < n - 1 && separator != NULL)
{
printf("%s", separator);
}
}
}
va_end(strings);
printf("\n");
}
