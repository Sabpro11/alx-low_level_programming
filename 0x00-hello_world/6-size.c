#include <stdio.h>
/**
 * main - A C program that prints a size of various computer types
 * Return: 0 (success)
 */
int main(void)
{
char a;
int b;
long c;
long long d;
float e;
printf("size of a char: %lu byte(s)\n", Sizeof(a));
printf("size of an int: %lu byte(s)\n", Sizeof(b));
printf("size of a long: %lu byte(s)\n", Sizeof(c));
printf("size of a long long: %lu byte(s)\n", Sizeof(d));
printf("size of a float: %lu byte(s)\n", Sizeof(e));
return (0);
}
