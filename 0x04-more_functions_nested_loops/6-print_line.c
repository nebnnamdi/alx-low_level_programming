#include "main.h"

/**
 * print_line - that draws a straight line in the terminal.
 * @n: input value to check
 * Return: nothing.
 */

void print_line(int n)
{
int x = 0;

while (x < n)
{
if (n > 0)
{
_putchar(95);
x++;
}
else
_putchar('\n');
}
_putchar('\n');
}
