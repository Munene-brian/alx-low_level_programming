#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies string pointed by src
 * @dest: destination
 * @src: the source
 * Return: pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;

while (i >= 0)
{
*(dest + i) = *(src + i);
if (*(src + i) == '\0')
	break;
i++;
}
return (i);
}
