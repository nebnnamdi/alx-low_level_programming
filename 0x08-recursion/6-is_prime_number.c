#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 *@num: inout number
 *@i: counter variable
 * otherwise return 0
 * @n: input number
 * Return: int
 */

int getNumPrim(int num, int i);

int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
return (getNumPrim(n, 2));
}

/**
 *getNumPrim - checks input if 1 or 0
 */

int getNumPrim(int num, int i)
{
if (num == i)
{
return (1);
}
if (num % i == 0)
{
return (0);
}
return (getNumPrim(num, i + 1));
}
