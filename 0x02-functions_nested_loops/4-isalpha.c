#include "main.h"

/**
 * _isalpha - check for alphabetic character
 * @c: check the value of c
 * Return: 1 if alphabet
 */

int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
else
{
return (0);
}
