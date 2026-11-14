#include "ft_printf.h"

int ft_print_hex(unsigned long long nbr, char *hex)
{
    int count;
    char c;

    count = 0;
    if (nbr > 15)
    {
        count += ft_print_hex(nbr / 16, hex);
    }
    c = hex[nbr % 16];
    write(1, &c, 1);
    count++;
    return count;
}