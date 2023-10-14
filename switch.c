#include "main.h"

/**
 * selector - Selects the appropriate specifier and calls the corresponding function
 * @format: The format specifier
 * @args: The arguments to use
 * @printed: The printed characters
 * Return: Number of printed characters
 */

int selector(const char *format, va_list args, int printed)
{
    switch (*format)
    {
        case 'd':
        case 'i':
            printed = printf_integer(args, printed);
            break;
        case 'c':
            _putchar(va_arg(args, int));
            printed++;
            break;
        case 's':
            printed = printf_string(args, printed);
            break;
        case '%':
            _putchar('%');
            printed++;
            break;
        case 'b':
            printed = printf_binary(va_arg(args, unsigned int), printed);
            break;
        case 'x':
        case 'X':
            printed = _x(va_arg(args, unsigned int), printed, (*format == 'X') ? 1 : 0);
            break;
        case 'o':
            printed = printf_octal(va_arg(args, unsigned int), printed);
            break;
        case 'u':
            printed = printf_unsigned(va_arg(args, unsigned int), printed);
            break;
        case 'r':
            printed = printf_reverse(args, printed);
            break;
        case 'p':
            printed = printf_pointer(args, printed);
            break;
        default:
            break;
    }
    return printed;
}
