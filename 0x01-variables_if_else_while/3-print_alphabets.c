#include <stdio.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints the alphabet in lowercase and uppercase
 * Return: 0 (success)
 */
int main(void)
{
char c;
char d;
c = 'a';
d = 'A';
while
(c <= 'z')
{
putchar(c);
c++;
}
while
(d <= 'Z')
{
putchar(d);
d++;
}
putchar('\n');
return (0);
}
