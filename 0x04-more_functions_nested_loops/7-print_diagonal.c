#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: input value to check
 * Return: nothing.
 */

void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
} else
{
int x, y;

for (x = 0; x < n; x++)
{
for (y = 0; y < n; j++)
{
if (y == x)
{
_putchar('\\');
}
else if (y < x)
  {
_putchar(' ');
}
}
}
_putchar('\n');
}
}
}
