#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: with the constant byte 
 * @b: Returns a pointer to the memory area
 * @n: bytes of the memory area pointed to by s
 * Return: the changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
