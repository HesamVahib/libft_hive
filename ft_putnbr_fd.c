#include "libft.h"

void ft_putnbr_fd(int n, int fd) {
    char *n_string;
    
    n_string = ft_itoa(n);
    ft_putstr_fd(n_string, fd);
}