#include "main.h"
/**
 * _strncat - Concatenates two strings using at most
 * an inputted number of bytes from src.
 * @dest: The string to be appended upon.
 * @src: The string to be appended to dest.
 * @n: The number of bytes from src to be appended to dest.
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int l1, l2, len;

l1 = l2 = 0;
while (dest[l1] != '\0')
{
l1++;
}
while (src[l2] != '\0')
{
l2++;
}
len = l2;
l2 = 0;
while (l2 < len && l2 < n)
{
dest[l1] = src[l2];
l1++;
l2++;
}
return (dest);
}
