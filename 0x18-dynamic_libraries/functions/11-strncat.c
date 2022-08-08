#include "../main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 * @n: Number of bytes to print
 *
 * Description - Concatenates two strings
 * Return: Pointer to the destination string.
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;
i = 0;
for (j = 0; dest[j] != '\0'; j++)
;
while (src[i] != '\0' && i < n)
{
dest[j + i] = src[i];
i++;
}
return (dest);
}
