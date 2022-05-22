#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * _print_unsign - prints an unsigned int.
 * @arg: argument
 * Return: always 0
 */

int _print_unsign(va_list arg)
{
int divide = 1, i, result;
unsigned int num = va_arg(arg, unsigned int);
for (i = 0; num / divide > 9; i++, divide *= 10)
;
for (; divide >= 1; num %= divide, divide /= 10)
{
result = num / divide;
_putchar('0' + result);
}
return (i + 1);
}

/**
 * print_unsignedintTohex - prints unsigned int to hexadecimal.
 * @num: number to print
 * @_case: letter `a` on the case to print it (upper or lower)
 * Return: number or char printed
 */

int _print_unsignedintTohex(unsigned int num, char _case)
{
unsigned int num2;
int i, j, remainder, nbrCharacters = 0;
char *numhex;
for (num2 = num; num2 != 0; nbrCharacters++, num2 /= 16)
;
numhex = malloc(nbrCharacters);
for (i = 0; num != 0; i++)
{
remainder = num % 16;
if (remainder < 10)
numhex[i] = remainder + '0';
else
numhex[i] = remainder - 10 + _case;
num = num / 16;
}
for (j = i - 1; j >= 0; j--)
_putchar(numhex[j]);
free(numhex);
return (nbrCharacters);
}
