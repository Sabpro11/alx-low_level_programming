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
for (i = 0; i < 90; i++)
{
for ()
{
putchar((i / 10) + 'i');
putchar((i % 10) + 'i');
}
if (i != 89)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
