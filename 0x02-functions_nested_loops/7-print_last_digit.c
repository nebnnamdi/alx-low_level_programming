#include "main.h"

/**
 * print_last_digit - prints last digin
 * @x: The input to check
 * Return: x
 */

int print_last_digit(int y)
{
int x;

x = y % 10;

if (x < 0)
{
x *= -1;
}
_putchar(x + '0');
return (x);
}
