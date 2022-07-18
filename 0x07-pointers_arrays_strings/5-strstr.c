#include "main.h"

/**
 * _strstr - finds the first occurence
 * @haystack: enter string
 * @needle: substring
 * Return: poiinter
 */
char *_strstr(char *haystack, char *needle)
{
char *bhaystack;
char *pneedle;

while (*heystack != '\0')
{
bhaystack = haystack;
pneedle = needle;

while (*haystack != '\0' && *pneedle != '\0' && *haystack == *pneedle)
{
haystack++;
pneedle++;
}
if (!*pneedle)
	return (bhaystack);
haystack = bhaystack + 1;

}
return (0);
}
