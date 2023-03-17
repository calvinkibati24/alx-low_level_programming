#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
char lcase, e, q;
e = 'e';
q = 'q';
for (lcase = 'a'; lcase <= 'z'; lcase++)
{
if (lcase != 'e' && lcase != 'q')
{
putchar(lcase);
}
putchar('\n');
return (0);
}}
