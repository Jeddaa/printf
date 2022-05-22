#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * _print_octa - prints number in octal base.
 * @arg: list containing octal number to be printed
 * Return: number of octals printed
 */

int _print_octa(va_list arg)
{
unsigned int num = va_arg(arg, unsigned int);
unsigned int copy;
char *octa;
int i, j, print_char = 0;
if (num == 0)
return (_putchar('0'));
for (copy = num; copy != 0; j++)
{
copy = copy / 8;
}
octa = malloc(j);
if (!octa)
return (-1);
for (i = j - 1; i >= 0; i--)
{
octa[i] = num % 8 + '0';
num = num / 8;
}
for (i = 0; i < j && octa[i] == '0'; i++)
;
for (; i < j; i++)
{
_putchar(octa[i]);
print_char++;
}
free(octa);
return (print_char);
}
