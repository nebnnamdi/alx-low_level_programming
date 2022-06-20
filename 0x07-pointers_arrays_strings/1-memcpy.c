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
unsigned int i;

for (i = 0; i < n; i++)
{
dest[n] = src[n];
}
return (dest);
