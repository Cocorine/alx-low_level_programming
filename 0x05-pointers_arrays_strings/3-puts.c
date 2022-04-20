#include "main.h"

/**
 * reset_to_98 - prints a string
 * @str: parameter
 *
 * Description - A function that prints a string
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
