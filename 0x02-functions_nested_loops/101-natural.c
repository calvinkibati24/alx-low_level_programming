#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024 (excluded)
 * Return: 0 (Successful)
*/
int main(void)
{
int i, sum = 0;
for (i = 0; i < 1024; i++)
{
if ((i % 3) == 0 || (i % 5) == 0)
sum += i;
}
printf("%d\n", sum);
return (0);
}
