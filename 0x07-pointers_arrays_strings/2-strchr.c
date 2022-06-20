#include "main.h"
#include <stdio.h>

/**
 * _strchr - function that locates a character in a string.
 *
 * @s: string to receive and return
 * @c: character to receive
 * Return: char
 */

char *_strchr(char *s, char c)
{
while (*s)
{
if (*s == c)
{
return (s);
}
s++;
}
return (!c ? s : NULL);
}
