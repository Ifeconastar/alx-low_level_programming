#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main -Entry point
 *
 *Description:'Program that prints the lowercase alphabet in reverse'
 *Return: Always 0 (Success)
 */
int main(void)
{
int i = 122;
while (i > 96)
{
putchar(i);
i--;
}
putchar(10);
return (0);
}
