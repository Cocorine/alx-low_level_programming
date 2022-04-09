#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int c = 0;
while (c <= 9)
{
int i = 1;
while (i <= 9)
{
putchar(48 + c);
putchar(48 + i);
putchar(',');
putchar(' ');
i++;
}
c++;
}
putchar('\n');
return (0);
}
