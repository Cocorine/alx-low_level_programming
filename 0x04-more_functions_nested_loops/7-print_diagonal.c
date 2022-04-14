#include "main.h"

/**
 * print_diagonal -  draws a diagonal line on the terminal.
 * @n: number being tested
 * Return: Always 0 (Success)
 */
void print_character(int time)
{
int i;
for (i = 0; i < time; i++)
{
_putchar(' ');
}
_putchar('\\');
}

void print_diagonal(int n)
{
int i;

i= 0;
while (i < n)
{
print_character(i);
i++;
if(i != n)
_putchar('\n');
}
_putchar('\n');
}
