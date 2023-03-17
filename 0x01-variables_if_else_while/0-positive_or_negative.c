#include <stdio.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Determines if a number is positif, negatif or zero
 * Return: 0 (success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positif\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negatif\n", n);
}

return (0);
}
