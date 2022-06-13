#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints elements of an array of integers
 * @arr: pointer to first int
 * @n: pointer to second int
 * Return: nothing
 */

void print_array(int *arr, int n)
{
int i = 0;

for (i = 0; i < n; i++)
{
printf("%d", arr[i]);
if (i < n - 1)
printf(", ");
}
printf("\n");
}
