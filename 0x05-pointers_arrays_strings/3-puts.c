#include "main.h"

/**
 * _puts - main function
 * @str: Pointer with the address value
 * Description: This function takes a pointer char and prints it
 * Return: none
 */

void _puts(char *str)
{
int i = 0;

while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
