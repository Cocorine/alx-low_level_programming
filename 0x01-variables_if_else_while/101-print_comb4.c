#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x = 0;
int y;
int z;
while (x <= 9)
{
y = 0;
while (y <= 9)
{
z = 0;
while (z <= 9)
{
if (x != y && y != z && x < y && y < z)
{
putchar('0' + x);
putchar('0' + y);
putchar('0' + z);
if (x + y + z != 7 + 8 + 9)
{
putchar(',');
putchar(' ');
}
}
z++;
}
y++;
}
x++;
}
putchar('\n');
return (0);
}
