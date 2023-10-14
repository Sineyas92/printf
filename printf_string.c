#include "main.h"

/**
 * print_string - Print a string
 * @args: The arguments to use
 * @printed: The printed characters
 * Return: Number of printed characters
 */

int print_string(va_list args, int printed)
{
    char *string = va_arg(args, char *);

    while (*string != '\0')
    {
        _putchar(*string);
        printed++;
        string++;
    }

    return printed;
}

