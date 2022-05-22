#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - prints out a value
 * _print_Identifier - a struct containing the specifiers
 * @next: move to the next character
 * @arg: argument
 * @format: format
 * 
 * Return: 0
 */

int _print_Identifier(char next, va_list arg)
{
int functsIndex;
identifierStruct functs[] = {
{"c", _print_xter},
{"s", _print_strng},
{"d", _print_num},
{"i", _print_num},
{"u", _print_unsign},
{"b", _print_unsignedTobinary},
{"o", _print_octa},
{"x", _print_hex},
{"X", _print_upper_hex},
{"S", _print_STRNG},
{NULL, NULL}
};

for (functsIndex = 0; functs[functsIndex].indentifier != NULL; functsIndex++)
{
if (functs[functsIndex].indentifier[0] == next)
return (functs[functsIndex].printer(arg));
}
return (0);
}


int _printf(const char * const format, ...)
{
va_list arg;
unsigned int g = 0;
int print_char = 0, print_identifier;
va_start(arg, format);
if (format == NULL)
return (-1);
for (g = 0; format[g] != '\0'; g++)
{
if (format[g] != '%')
{   
_putchar(format[g]);
print_char++;
continue;
}
if (format [g + 1] == '%')
{
_putchar('%');
print_char++;
g++;
continue;
}
if (format[g + 1] == '\0')
{
return (-1);
}
print_identifier = _print_Identifier(format[g + 1], arg);
if (print_identifier == -1 || print_identifier != 0)
g++;
if (print_identifier > 0)
print_char += print_identifier;
if (print_identifier == 0)
{
_putchar('%');
print_char++;
}
}
 
va_end(arg);
return (print_char);
}
