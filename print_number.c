#include "main.h"
#include <stdarg.h>

/**
 * _print_num - prints an integer
 * @arg: argument
 * Return: 1 if succesful, -1 on error
 */

int _print_num(va_list arg)
{
unsigned int div = 1, i, quot, print_char = 0;
int num = va_arg(arg, int);
if (num < 0)
{
_putchar('-');
print_char++;
num *= -1;
}
for (i = 0; num / div > 9; i++, div *= 10)
;
for (; div >= 1; div /= 10, print_char++)
{
quot = num / div;
_putchar('0' + quot);
}
return (print_char);
}
