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
printf('\n');
while
(d <= 'Z')
{
putchar(d);
d++;
}
return (0);
}
