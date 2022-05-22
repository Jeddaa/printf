#include "main.h"
#include <stdarg.h>

/**
 * _print_hex_base - base function for printing hexadecimal numbers
 * @arg: argument list containing hexadecimal
 * @_xter: a  in caps on lower, printing the hex number in caps in 
 * @nbrcharacters: number of characters
 * @num: integer
 * Return: number of digits printed
 */

int _print_hex_base(va_list arg, char _xter)
{
	unsigned int num = va_arg(arg, unsigned int);
	int nbrCharacters;

	if (num == 0)
		return (_putchar('0'));
	nbrCharacters = _print_unsignedintTohex(num, _xter);

	return (nbrCharacters);
}
/**
 * _print_hex - prints a hexadecimal in lower case
 * @arg: list that contains hexadecimal to print
 * Return: number of digits printed
 */

int _print_hex(va_list arg)
{
	return (_print_hex_base(arg, 'a'));
}

/**
 * _print_upper_hex - prints a hexadecimal in upper case
 * @arg: list that contains hexadecimal to print
 * Return: number of digits printed
 */

int _print_upper_hex(va_list arg)
{
	return (_print_hex_base(arg, 'A'));
}