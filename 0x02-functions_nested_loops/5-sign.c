#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: the int to check
 * Return: 1 prints n if > 0 prints 0 if n = zero  -1 prints - if n < 0
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
}
