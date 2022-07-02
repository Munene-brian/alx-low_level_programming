#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
unsigned char c = '0';
int a;
for (a = 0; a < 10; a++)
{
putchar(c);
c++;
}
c = '1';
for (a = 0; a < 6; a++)
{
putchar('0' + c);
c++;
}
putchar('\n');
return (0);
}
