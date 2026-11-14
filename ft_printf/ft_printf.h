#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>

int ft_printf(const char *f, ...);
int ft_print_char(int c);
int ft_print_str(char *s);
int ft_print_nbr(int n);
int ft_print_uns(unsigned int nb);
int ft_print_ptr(void *p);
int ft_print_hex(unsigned long long nbr, char *hex);

#endif