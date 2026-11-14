#include "ft_printf.h"

int ft_print_uns(unsigned int nb)
{
    int count;
    char c;

    count = 0;
    if (nb > 9)
    {
        count += ft_print_uns(nb / 10);
    }
    c = nb % 10 + '0';
    write(1, &c, 1);
    count++;
    return count;
}