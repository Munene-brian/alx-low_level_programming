#include "main.h"

/**
 * _isalpha -checks for alphabets
 * @c: a character to check
 *
 * Return: 0 or 1 depending
 *
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
