#include "../main.h"

/**
 * _isupper - checks for uppercase character.
 * @c: number being tested
 * Return: Always 0 (Success)
 */

int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
return (1);
else
return (0);
}
