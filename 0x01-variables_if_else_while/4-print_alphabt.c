#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: alway 0
 */
int main(void)
{
char a;
for (a = 'a'; a <= 'z'; a++)
{
if (a == 'q' || a == 'e')
{
continue;
}
putchar (a);
return (0);
}
}
