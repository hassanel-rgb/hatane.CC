#include "ft_printf.h"

static int ft_format(va_list ap, const char format)
{
    int count;

    count = 0;
    if(format == 'c')
        count = ft_print_char(va_arg(ap, int));
    else if(format == 's')
        count = ft_print_str(va_arg(ap, char *));
    else if(format == 'd' || format == 'i')
        count = ft_print_nbr(va_arg(ap, int));
    else if(format == 'u')
        count = ft_print_uns(va_arg(ap, unsigned int));
    else if(format == 'x')
        count = ft_print_hex(va_arg(ap, unsigned int), "0123456789abcdef");
    else if(format == 'X')
        count = ft_print_hex(va_arg(ap, unsigned int), "0123456789ABCDEF");
    else if(format == 'p')
        count = ft_print_ptr(va_arg(ap, void *));
    else if(format == '%')
        count = ft_print_char('%');
    return count;
}

int ft_printf(const char *f, ...)
{
    va_list ap;
    int count;
    int i;

    va_start(ap, f);
    count = 0;
    i = 0;
    while(f[i])
    {
        if (f[i] == '%')
        {
            count += ft_format(ap, f[i + 1]);
            i += 2;
        }
        else
        {
            count += ft_print_char(f[i]);
            i++;
        }
    }
    va_end(ap);
    return count;
}