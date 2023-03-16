#include <stdio.h>
/**
 * main - A C program that prints a size of various computer types
 * Return: 0 (success)
 */
int main(void)
{
char a;
int b;
float c;
long int d;
long long int e;
printf("size of a char: %lu byte(s)\n", sizeof(a));
printf("size of an int: %lu byte(s)\n", sizeof(b));
printf("size of a float: %lu byte(s)\n", sizeof(c));
printf("size of a long int: %lu byte(s)\n", sizeof(d));
printf("size of a long long int: %lu byte(s)\n", sizeof(e));
return (0);
}
