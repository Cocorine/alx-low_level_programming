#include "main.h"
/**
 * print_long - prints an integer.
 * @value: number input
 * Return: void (Success)
 */

void print_long(int value)
{
	if (value > 0)
	{
		print_long(value / 10);
		_putchar((value % 10) + '0');
	}
}

/**
 * print_number -prints an integer.
 * @n: int value
 * Return: Always 0 (Success)
 */

void print_number(int n)
{
if (n < 0)
{
n = n * -1;
_putchar('-');
}
print_long(n / 10);
_putchar((n % 10) + '0');
}
