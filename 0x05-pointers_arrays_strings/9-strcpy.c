#include "main.h"
#include <stdio.h>


/**
 * *_strcpy - main function.
 * @dest: destination
 * @src: source
 * Description: the function copies the string pointed to by src
 * Return: pointer dest.
 */

char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i]; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';

return (dest);
}
