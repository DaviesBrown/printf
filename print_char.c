#include "main.h"

int print_char(va_list arg)
{
    int count = 0;
    char c = (char)va_arg(arg, int);
    
    if (c)
    {
        count = _putchar(c);
        return (count);
    }
    return (0);
}