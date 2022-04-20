#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet in lowercase x10
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
char alphabet;
int i = 0;
for (i = 0; i < 10; i++)
{
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}
_putchar('\n');
}
}
