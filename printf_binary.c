#include "main.h"

/**
 * _print_binary - function that prints the binary equivalent of a number
 * @n: number to be printed in binary
 * @printb: number of characters to be printed
 */

void _print_binary(unsigned int n, unsigned int *printb)
{
if (n > 1)
{
*printb += 1;
_print_binary(n >> 1, printb);
}
_putchar((n & 1) + '0');
}


/**
 * _print_unsignedTobinary - prints an integer.
 * @arg: argument
 * Return: 0
 */

int _print_unsignedTobinary(va_list arg)
{

unsigned int x = va_arg(arg, unsigned int);
unsigned int printB;

_print_binary(x, &printB);
/* _print_binary(x, &printB); */

return (printB);
}
