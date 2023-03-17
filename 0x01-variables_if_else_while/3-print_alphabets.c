#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -  prints the alphabet in lowercase then in uppercase
 * Return: 0 (Success)
 */
int main(void)
{
char lcase;
char ucase;
for (lcase = 'a'; lcase <= 'z'; lcase++)
{
putchar(lcase);
}
for (lcase = 'A'; lcase <= 'Z'; ucase++)
{
putchar(ucase);
}
return (0);
}
