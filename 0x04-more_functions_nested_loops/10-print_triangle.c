#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 * Return: 0
 */

void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int x, y;

for (x = x; x <= size; x++)
{
for (y = x; y < size; y++)
{
_putchar(' ');
}

for (y = 1; y <= x; y++)
{
_putchar('#');
}

 _putchar('\n');
}
}
}
