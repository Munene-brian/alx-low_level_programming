#include "holberton.h"
/**
 * _puts - prints a string
 * @str: pointer to string
 * Return: void
 */
void _puts(char *str)
{
for (; *str != '\0'; str++)
{
_putchar(*str);
}
}
