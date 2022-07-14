#include "main.h"
#include <string.h>
/**
 * *_strcat -functions to commute
 * @dest: parameter
 * @src: pointer para
 * Return: return value
 */

char *_strcat(char *dest, char *src)
{
int i, j;

i = 0;

while (dest[i] != '\0')
{
++;
}

j = 0;

while (src[i] != '\0')
{
dest[i] = src[j];
j++;
i++;
}
dest[i] = '\0';

return (dest);
}
