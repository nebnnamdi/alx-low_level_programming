#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: sizeof int
 * Return: nothing
 */

void *malloc_checked(unsigned int b)
{
void *alloc;

alloc = malloc(b);
if (alloc == NULL)
{
exit(98);
}
else
{
return (alloc);
}
}
