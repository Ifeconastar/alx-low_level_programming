#include "main.h"

/**
 * _memcpy - program copies memory area.
 * @dest: pointer to the memory area to be filled.
 * @src: character to fill the memory area with.
 * @n: number of bytes to be filled.
 *
 * Return: pointer to the filled memory area @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index = 0;

	for (index = 0; index < n; index++)
	{
		dest[index] = src[index];
	}
	return (dest);
}
