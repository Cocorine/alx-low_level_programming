#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * positive_or_negative - Entry point
 * @i: number being tested
 * Return: void (Success)
 */
void positive_or_negative(int i)
{
/* your code goes there */
if (i > 0)
{
printf("%d is positive\n", i);
}
else if (i == 0)
{
printf("0 is zero\n");
}
else
{
printf("%d is negative\n", i);
}
}

