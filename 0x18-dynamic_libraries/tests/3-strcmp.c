#include "main.h"
/**
 * _strcmp - function compares two strings
 * @s1: string to be compared
 * @s2: second string to be compared
 *
 * Return: -ve difference of first unmatched characters if s1 < s2
 * 0 if s1 == s2
 * +ve difference of first unmatched characters if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
