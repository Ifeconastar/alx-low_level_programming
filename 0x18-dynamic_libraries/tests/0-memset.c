#include "main.h"

/**
 * _memset - program fills memory with a constant byte.
 * @s: pointer to the memory area to be filled.
 * @b: character to fill the memory area with.
 * @n: number of bytes to be filled.
 *
 * Return: pointer to the filled memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int j = 0;
	unsigned int index;

	while (*(s + j) != '\0')
	{
		j++;
	}

	for (index = 0; index < n; index++)
	{
		s[index] = b;
	}
	return (s);
}
