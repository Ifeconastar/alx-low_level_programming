#include <stdio.h>
#include <time.h>
#include <stdio.h>

/**
 *main -Entry point
 *
 *Description:'Program that prints all possible differen combinations'
 *Return: Always 0 (Success)
 */
int main(void)
{
int i, j;
i = 48;
j = 48;
while (i < 58)
{
j = 48;
while (j < 58)
{
putchar(i);
putchar(j);
if (i < 57 || j < 57)
{
putchar(44);
putchar(32);
}
j++;
}
i++;
}
putchar(10);
return (0);
}
