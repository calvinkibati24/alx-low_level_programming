#include "main.h"
/**
 * print_alphabet - prints the alphabet, in lowercase
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);
_putchar('\n');
return (0);
}

