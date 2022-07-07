#include <unistd.h>

/**
 * _putchar - writesthe charater
 * @c: The character to print
 *
 * Return: in sucess 1
 * on error, -1 is returned
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
