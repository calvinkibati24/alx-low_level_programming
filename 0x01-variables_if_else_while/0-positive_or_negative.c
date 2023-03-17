#include <stdio.h>
/**
 * main - print whether the number stored is positive or negative
 * Return: 0 (Success)
 */
int main(void)
{
int n;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}
