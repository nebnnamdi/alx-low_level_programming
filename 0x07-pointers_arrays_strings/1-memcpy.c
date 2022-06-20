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
  unsigned int i = 0;

while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
