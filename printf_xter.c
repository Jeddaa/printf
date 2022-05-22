#include "main.h"
#include <stdarg.h
/**
 * _print_xter - print character
 * @arg: argument
 * Return: character
 */

int _print_xter(va_list arg)
{
return (_putchar(va_arg(arg, int)));
}
