#include "main.h"

/**
 *print_alphabet - print alphabets with _putchar
 */

void print_alphabet(void);

void print_alphabet(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
return;
}
