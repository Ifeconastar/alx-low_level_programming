#include "main.h"
/**
 * _strncat - function concatenates two strings using n bytes from src.
 * @dest: A pointer to the string to be concatenated upon
 * @src: source string to be appended to @dest
 * @n: number of bytes from src
 *
 * Return: a point to the resulting string @dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0;
	int dest_length = 0;

	while (dest[index++])
		dest_length++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_length++] = src[index];

	return (dest);
}
