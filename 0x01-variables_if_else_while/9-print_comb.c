#include <stdio.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - A a program that prints  all possible combinations of single-numbers
 * Return: 0 (success)
 */
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
if (i < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
