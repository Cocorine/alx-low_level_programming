#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int c = 1;
while (c <= 99)
{
if (c < 10)
{
putchar('0');
}
putchar(48 + c);
if (c != 99)
{
putchar(',');
putchar(' ');
}
c++;
}
putchar('\n');
return (0);
}
