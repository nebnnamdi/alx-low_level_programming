#include "main.h"

/**
 * print_to_98 - prints absolute values of n - 98
 * @n: inputed number
 */

void print_to_98(int n)
{
char x;
for (x = n; x <= 98; x++)
{
_putchar(x);
_putchar(',');
_putchar(' ');
}
return;
}
