#include "main.h"

int print_str(va_list arg)
{
    char *s = va_arg(arg, char*);

    
    return (*s);
}