#include <stdio.h>
/**
 * main -entry
 *
 * Return: always 0
 */
int main(void)
{
char a;
for (a = 'a'; a <= 'z'; a++)
{
if (a != 'e' && a != 'q')
{
putchar (a);
}

}
return (0);
}
