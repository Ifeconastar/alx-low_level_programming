#include "main.h"
/**
 * _strncpy - function copies a string
 * @dest: A pointer to store the string copy
 * @src: source string to be copieed to @dest
 * @n: number of bytes to be copied from src
 *
 * Return: a point to the resulting string @dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;
	int src_length = 0;

	while (src[index++])
		src_length++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_length; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
