#include "main.h"
/**
 * print_long - prints value
 * @value: number input
 * Return: void (Success)
 */

void print_long(long value)
{
	if (value > 0)
	{
		print_long(value / 10);
		_putchar((value % 10) + '0');
	}
}

/**
 * print_times_table - prints the n times table
 * starting with user input's number
 * prints to 15 regardless <= 15 or >= 0
 * @n: number input
 * Return: Always 0 (Success)
 */

void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int i, j, val = 0;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{

				print_long(val / 10);
				_putchar((val % 10) + '0');

				if (j != n)
				{

					val += i;
					_putchar(',');
					_putchar(' ');

					if (val < 100 && val >= 10)
					{
						_putchar(' ');

					}
					else if (val < 10)
					{
						_putchar(' ');
						_putchar(' ');
					}
				}
			}

			if (i != n)
			{
				val = 0;
				_putchar('\n');
			}
		}
	}
	_putchar('\n');
}
