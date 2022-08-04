/**
 * _strcat - Concatenates two strings
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 *
 * Description - Concatenates two strings
 * Return: Pointer to the destination string.
 */
char *_strcat(char *dest, char *src)
{
int i, j;
i = 0;
for (j = 0; dest[j] != '\0'; j++)
;
while (src[i] != '\0')
{
dest[j + i] = src[i];
i++;
}
return (dest);
}
