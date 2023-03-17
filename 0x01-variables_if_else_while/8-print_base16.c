#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
int d;
char lcase;
for (d = '0'; d <= '9'; d++)
{
putchar(d);
}
for (lcase = 'a'; lcase <= 'z'; d++)
{
putchar(lcase);
putchar('\n');
}
return (0);
}
