
#include <stdio.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - A a program that prints  all the numbers of base 16 in lowercase
 * Return: 0 (success)
 */
int main(void)
{
char c;
int d;
c = 'a';
d=0;
while
(d < 10)
{
putchar(d + '0');
d++;
}
while
(c <= 'f')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
