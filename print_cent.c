#include "main.h"

int print_cent(va_list arg)
{
    int count = 0;
    char p = (char)va_arg(arg, int);
    if (p)
    {
        count = write(1, &p, 1);
        return (p);
    }
    return count;
}