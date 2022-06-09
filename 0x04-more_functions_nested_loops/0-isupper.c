#include "main.h"

/**
 * _isupper - a function that checks for uppercase character
 * @c: input to check
 * Return: the int
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else if (c >= 'a' && c <= 'z')
{
 return (0);
}
else
return (0);
}
