#include "main.h"

/**
 * print_character -  Design of each line of our diagonal.
 * @time: number of time the character should print per line
 * Return: void (Success)
 */
void print_character(int time)
{
while (time > 0)
{
_putchar('#');
time--;
}
}

/**
 * print_square -  prints a square.
 * @size: size number of the square
 * Return: void (Success)
 */
void print_square(int size)
{
int i;

i = 0;
while (size > 0 && i < size)
{
print_character(size);
i++;
if (i != size)
_putchar('\n');
}
_putchar('\n');
}
