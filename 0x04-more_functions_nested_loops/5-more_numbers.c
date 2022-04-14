#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
int i;
int j;

j = 10;
while (j--)
{
i = 0;
while (i < 15)
{
if (i >= 10)
{
_putchar((i / 10) + '0');
}
_putchar((i % 10) + '0');
i++;
}
_putchar('\n');
}
}
