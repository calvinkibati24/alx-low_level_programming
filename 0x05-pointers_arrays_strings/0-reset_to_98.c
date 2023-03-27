#include "main.h"
/**
 * swap_int - function that takes a pointer to an int as parameter
 * @a: integer to swap
 * @b: integer to swap
 */
void swap_int(int *a, int *b)
{
int m;
m = *a;
*a = *b;
*b = m;
}
