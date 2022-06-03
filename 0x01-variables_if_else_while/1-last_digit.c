#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/**
 * main - prints the last digit of the random
 * number stored in the variable n
 * Return: Always 0 (Success)
 */
int main(void)
{
  int n, lastdigit;

srand(time(0));
n = rand() - RAND_MAX / 2;
lastd = n % 10;

if (lastd > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lastdigit);
}
else if (lastd == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lastdigit);
}
else if (lastd < 6 && lastd != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastdigit);
}

return (0);
}
