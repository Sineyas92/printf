#include "main.h"

/**
 * _printf - Custom implementations of printf
 * @format: Format specifier
 * Return: Number of characters printed (excluding null byte)
 */

int _printf(const char *format, ...)
{
    int printed = 0;

    va_list args;
    va_start(args, format);

    while (*format)
    {
        if (*format == '%')
        {
            format++;
            printed += selector(format, args, printed);
            format++;
        }
        else
        {
            _putchar(*format);
            printed++;
            format++;
        }
    }

    va_end(args);
    return printed;
}
