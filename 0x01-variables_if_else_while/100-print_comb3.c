#include <stdio.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints combinations of two-digit numbers.
 * Return: 0 (success)
 */
int main(void)
{
int i;
for (i = 1; i < 90; i++)
{
putchar((i / 10) + '0');
putchar((i % 10) + '0');

if (i != 89)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
