#include <stdio.h>
#include <time>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: always return 0
 */
int main(void)
{
int n;
int lastone;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastone = n % 10;
if (lastone > 5)
{
printf("Last digit of %d is  %d is greater than 5\n", n, lastone);
}
else if (lastone  == 0)
{
printf("Last digit of %d is %d is 0\n", n, lastone);
}
else
{
printf("Last digit of %d is  %d and is less than 6 and not 0\n", n, lastone);
}
return (0);
}
