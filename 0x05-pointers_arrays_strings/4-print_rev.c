#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: String to reverse
 * Return:
 */

void rev_string(char *s)
{
int i = 0;
int j = 0;
char k;

while (*(s + i) != '\0')
i++;
i--;

while (j < i)
{
k = s[i];
s[i] = s[j];
s[j] = k;
j++;
i--;
}
}
