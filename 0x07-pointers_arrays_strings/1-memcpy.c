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
unsigned int x;
  
for (x = 0; x < n; x++)
{
dest[n] = src[n];
}
return (dest);
}
