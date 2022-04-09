#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int c = 0;
int i;
while (c <= 9)
{
i = 0;
while (i <= 9)
{
if ( c != i && c < i)
{
putchar(',');
putchar(' ');
}
i++;
}
c++;
}
putchar('\n');
return (0);
}
