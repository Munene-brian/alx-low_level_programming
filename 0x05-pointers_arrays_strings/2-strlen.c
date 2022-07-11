#include "main.h"

/**
 * _strlen - length of string.
 * @s: input string
 * Return: lenghth of  string
 */

int _strlen(char *s)
{
int i = 0;

while (*(s + i) != '\n')
	i++;
return (i);
}
