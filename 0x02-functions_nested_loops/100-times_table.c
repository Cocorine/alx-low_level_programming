#include <stdio.h>
#include "main.h"
/**
 * print_times_table - a function that prints the n times table, starting with 0
 * user input's number prints to 15, regardless <= 15 or >= 0
 * @n: number input
 * Return: Always 0 (Success)
 */
void print_times_table(int n)
{
if (n >= 0 && n <= 15)
{
int i = 0;
int j = 0;
for (i = 0; i <= n; i++)
{
int val = 0;
for (j = 0; j <= n; j++)
{
_putchar(val + '0');
if (j != n)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
val += i;
}
}
_putchar('\n');
}
}
_putchar('\n');
}
