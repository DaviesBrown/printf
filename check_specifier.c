#include "main.h"

int (*check_specifier(const char *s))(va_list)
{
    int i;
    spec op[5] = {
        {"c", print_char},
        {"s", print_str},
        {"%", print_cent},
        {NULL, NULL}
    };

    for (i = 0; op[i].symbol != NULL; i++)
    {
        if (*op[i].symbol == *s)
        {
            return (op[i].f);
        }
    }
    return (NULL);
}