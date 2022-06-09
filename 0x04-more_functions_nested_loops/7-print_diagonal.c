#include "main.h"

/**
 * print_diagonal - draw a diagonal line
 * @n: input value
 * Return: 
 */

void print_diagonal(int n)
{
int x = 0;
int y = 0;

while (x < n)
{
while (y <= x)
{
if (y != x)
{
_putchar(' ');
}
else
{
_putchar(92);
y++;
}
}
_putchar('\n');
x++;
y = 0;
}
if (n <= 0)
_putchar('\n');
}
