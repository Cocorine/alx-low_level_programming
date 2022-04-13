#include "main.h"
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
				_putchar((val) + '0');

				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');

					val += i;
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
