#include <stdio.h>

/**
 * main - Print letters a - z
 *
 * Return: Always 0.
 */

int main(void)
{
char a = 'a';

for (a = 'a'; a <= 'z'; a++)
{
putchar(a);
}
putchar('\n');
return (0);
}
