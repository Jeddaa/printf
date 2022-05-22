#include "main.h"
#include "stdarg.h"
#include "unistd.h"

/**
 * print_STRNG - prints a string with a `S` (upper case) specificer
 * @arg: argument
 * 
 * Return: number of character printed
 */

int _print_STRNG(va_list arg)
{
int j;
char *str = va_arg(arg, char*);

if (str == NULL)
str = "(null)";
else if (*str == '\0')
return (-1);

for (j = 0; str[j]; j++)
{
if ((str[j] < 32 && str[j] > 0) || str[j] >= 127)
{
_putchar('\\');
_putchar('x');
if (j < 16)
_putchar('0');
_print_unsignedintTohex(str[j], 'A');
}
else
_putchar(str[j]);
}
return (j);
}
