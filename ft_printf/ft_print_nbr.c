#include "ft_printf.h"

int ft_print_nbr(int n)
{
    int count;
    char c;

    if (n == -2147483648)
    {
        write(1, "-2147483648", 11);
        return 11;
    }
    count = 0;
    if (n < 0)
    {
        write(1, "-", 1);
        n = -n;
        count++;
    }
    if (n > 9)
    {
        count += ft_print_nbr(n / 10);
    }
    c = n % 10 + '0';
    write(1, &c, 1);
    count++;
    return count;
}