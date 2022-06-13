#include "main.h"

/**
 * print_rev - function that reverses a string
 * @s: String to reverse
 * Description: reverse printing of a string
 * Return:
 */

void print_rev(char *s)
{
int count = 0;

while (s[count])
{
count++;
}

count--;

for (; count >= 0; count--)
{
_putchar(s[count]);
}

_putchar('\n');
}
