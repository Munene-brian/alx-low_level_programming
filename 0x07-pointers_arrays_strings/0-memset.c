#include "main.h"

/**
 * _memset - fill memory with byte
 * @s: memory area
 * @b: constsnt byte
 * @n: byte fiiled
 * Return: poinetr to dest
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
	s[i] = b;

return (s);
}
