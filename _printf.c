#include "main.h"
/**
 * _printf - prints a formatted string
 * @format: string to print
 * @...: variadic parameter
 *
 * Return: numbers of characters printed
 */

int _printf(const char *format, ...)
{
    int count = 0, value, i = 0;
    va_list arg;
    int (*f)(va_list);
    while (format[i])
    {
        if (format[i] != '%')
        {
            value = _putchar(format[i]);
            count += value;
            i++;
            continue;
        }
        if (format[i] == '%')
        {
            f = check_specifier(&format[i + 1]);
            if (f != NULL)
            {
                value = f(arg);
                count += value;
                i += 2;
                continue;
            }
            if (format[i + 1] == '\0')
            {
                break;
            }
            if (format[i + 1] != '\0')
            {
                value = write(1, &format[i + 1], 1);
                count += value;
                i += 2;
                continue;
            }
        }
    }
	return (count);
}
