#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse
 * Return: 0 (Success)
 */
int main(void)
{
char lcase;
for (lcase = 'z'; lcase <= 'a'; lcase++)
{
putchar(lcase);
putchar('\n');
}
return (0);
}
