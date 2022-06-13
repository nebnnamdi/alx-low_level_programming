#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: String to reverse
 * Return:
 */

#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: String to reverse
 * Return:
 */

void print_rev(char *s)
{
  int count = 0;

  while (s[count])
    {
      count++;
    }

  count--;

  for (; count >= 0; count--)
    {
      _putchar(s[count]);
    }

  _putchar('\n');
}
