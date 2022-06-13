#include "main.h"

/**
 * _puts - main function
 * @str: Pointer with the address value
 * Description: This function takes a pointer char and prints it
 * Return: none
 */

void _puts(char *str)
{
while (*str != '\0')
{
putchar(*str++);
}
putchar('\n');
}
