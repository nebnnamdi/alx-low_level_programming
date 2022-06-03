#include <stdio.h>

/**
 * main - Prints both uppercase and lowercase letters
 *
 * Return: Always 0.
 */

int main(void)
{
char x = 'a';

for (x = 'a'; x <= 'z'; x++)
{
if ((x != 'e') && (x != 'q'))
{
putchar(x);
}
}
putchar('\n');
return (0);
}
