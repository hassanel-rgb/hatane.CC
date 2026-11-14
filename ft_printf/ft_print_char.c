#include "ft_printf.h"

int ft_print_char(int c)
{
    char    x;
    x = (char)c;
    if (write(1, &x, 1) == -1)
        return -1;
    return 1;
}