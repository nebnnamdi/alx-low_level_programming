#include "main.h"

/**
 * puts2 - function that prints every other 
 * @s: input
 * Return:
 */

void puts2(char *str)
{
int i;

while (str[i])
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
i++;
}
_putchar('\n');
}
