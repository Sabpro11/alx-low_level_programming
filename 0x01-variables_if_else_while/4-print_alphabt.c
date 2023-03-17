#include <stdio.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - A a program that prints the alphabet in lowercase
 * Return: 0 (success)
 */
int main(void)
{
char c;
c = 'a';
while
(c <= 'z')
{
if (( c != 'q' && c != 'e') && c <= 'z')
putchar(c);
c++;
}
putchar('\n');
return (0);
}
