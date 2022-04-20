#include "main.h"

/**
 * print_character -  Design of each line of our diagonal.
 * @spacer: number of space to draw
 * @drawer: number of character should print
 * Return: void (Success)
 */
void print_character(int spacer, int drawer)
{
int i;
for (i = 1; i < spacer; i++)
{
_putchar(' ');
}
while (drawer >= 0)
{
_putchar('#');
drawer--;
}
}
/**
 * print_triangle -  prints a triangle
 * @size: is the size of the triangle
 * Return: void (Success)
 */
void print_triangle(int size)
{
int i;

i = 0;
while (size > 0 && i < size)
{
print_character((size - i), size - (size - i));
i++;
if (i != size)
_putchar('\n');
}
_putchar('\n');
}
