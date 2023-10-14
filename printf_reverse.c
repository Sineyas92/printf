#include "main.h"

/**
 * print_reverse - Print a string in reverse
 * @args: The arguments to use
 * @printed: The printed characters
 * Return: Number of printed characters
 */

int print_reverse(va_list args, int printed)
{
    char *str = va_arg(args, char *);
    int len = 0, i;

    while (str[len])
    {
        len++;
    }

    for (i = len - 1; i >= 0; i--)
    {
        _putchar(str[i]);
        printed++;
    }

    return printed;
}
