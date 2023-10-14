#include "main.h"

/**
 * printf_char - Print a character
 * @args: The arguments to use
 * @printed: The printed characters
 * Return: Number of printed characters
 */

int printf_char(va_list args, int printed)
{
    int character = va_arg(args, int);

    _putchar(character);
    return (printed + 1);
}
