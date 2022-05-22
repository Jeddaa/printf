#ifndef _MAIN_H_
#define _MAIN_H
#include <stdarg.h>


int _putchar(char c);
int _printf(const char * const format, ...);
int _print_xter(va_list arg);
int _print_strng(va_list arg);
int _print_num(va_list arg);
int (*_new_func(char c))(va_list);
int _print_STRNG(va_list arg);
int _print_unsignedintTohex(unsigned int num, char _case);
int _print_hex_base(va_list arg, char _case);
int _print_hex(va_list arg);
int _print_upper_hex(va_list arg);
void _print_binary(unsigned int n, unsigned int* printb);
int _print_unsignedTobinary(va_list arg);
int _print_octa(va_list arg);
int _print_unsign(va_list arg);


/**
 * struct identifierStruct - structure definition of a printTypeStruct
 * @indentifier: type
 * @printer: function to print
 */
typedef struct identifierStruct
{
char *indentifier;
int (*printer)(va_list);
} identifierStruct;



#endif /* _fatihah and ronke_ */