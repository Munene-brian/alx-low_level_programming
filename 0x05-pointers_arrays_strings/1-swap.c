#include "main.h"

/**
 * swap_int - swapping two intergers
 *
 * @a: to be swapped
 * @b: to be swapped
 */
void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
