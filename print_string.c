#include "main.h"
#include <stdarg.h>

/**
 * _print_strng - prints a string with a `s` (lower case) specifier
 * @arg: argument
 * Return: number of character printed
 */

int _print_strng(va_list arg)
{
char *strng = va_arg(arg, char*);
int h = 0;
while (strng[h] != '\0')
{
_putchar(strng[h]);
h++;
}
return (h);
}
