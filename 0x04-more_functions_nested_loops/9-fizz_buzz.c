#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100.
 * But for multiples of three print Fizz instead of the number
 * for the multiples of five print Buzz
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;

i = 1;
while (i < 101)
{
if (((i % 3) == 0) && ((i % 5) == 0))
{
printf("FizzBuzz");
}
else if ((i % 5) == 0)
{
printf("Buzz");
}
else if ((i % 3) == 0)
{
printf("Fizz");
}
else
{
printf("%d", i);
}
i++;
if (i != 101)
printf(" ");
}
printf(" ");
return (0);
}
