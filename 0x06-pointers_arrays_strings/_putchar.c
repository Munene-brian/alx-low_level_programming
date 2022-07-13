#include <unistd.h>

/**
 * _putchar - writes the character
 * @c: The character
 *
 * Return: On Success 1
 * On error, -1 is returned
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
