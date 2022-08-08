#include "../main.h"
/**
 * sub - Substraction of two number
 * @a: int number
 * @b: int number
 *
 * Return: Always 0 (Success)
 */

int sub(int a, int b)
{
    if(a <= b)
        return (a - b);
    else
        return (b - a);
}
