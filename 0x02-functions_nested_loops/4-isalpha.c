#include "main.h"

/**
 * _isalpha - check for alphabetic character
 * @c: check the value of c
 * Return: 1 if alphabet
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
