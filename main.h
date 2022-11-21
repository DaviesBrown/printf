#ifndef main_h_
#define main_h_

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);
typedef struct specifier
{
    char *symbol;
    int (*f)(va_list);
} spec;
int (*check_specifier(const char *s))(va_list);
int print_char(va_list);
int print_str(va_list);
int print_cent(va_list);

#endif /* main_h_ */