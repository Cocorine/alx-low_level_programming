#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int abs = 0;
int ord;
while (abs <= 98)
{
ord = 0;
while (ord <= 99)
{
if (abs < 10)
{
putchar('0');
}
putchar(48 + abs);
putchar(' ');
if (ord < 10)
{
putchar('0');
}
putchar(48 + ord);
if (abs != 98 && ord != 99)
{
putchar(',');
putchar(' ');
}
ord++;
}
abs++;
}
putchar('\n');
return (0);
}
