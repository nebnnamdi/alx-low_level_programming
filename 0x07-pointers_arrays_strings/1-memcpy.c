#include "main.h"

/**
 *_memcpy - copies memory
 *@dest: destination
 *@src: source
 *@n: integer
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int x = 0;

while (x < n)
{
dest[n] = src[n];
x++;
}
 return (dest);
