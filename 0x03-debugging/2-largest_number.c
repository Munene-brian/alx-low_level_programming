#include <stdio.h>
#include "main.h"
/**
 * largest_number - returns the largest of 3 number
 * @a: first int
 * @b: second int
 * @c: third int
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
int larg;

if (a >= b && a >= c)
{
larg = a;
}
else if (b >= a && b >= c)
{
larg = b;
}
else
{
larg = c};
}
