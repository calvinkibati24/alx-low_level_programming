#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: 0 (Success)
 */
int main(void)
{
int p, q;
for (p = '0'; p < '98'; p++)
{
for (q = p + 1; q <= '99'; q++)
{
putchar(d);
putchar(p);
}
putchar('\n');
}
return (0);
}
