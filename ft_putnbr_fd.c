#include <stdlib.h>
#include <unistd.h>

void ft_putstr_fd(char *s, int fd) {
    int i;

    i = 0;
    while (s[i]) {
        write(fd, &s[i], 1);
        i++;
    }
}

char *ft_itoa(int n) {
    char *num;
    int sign;
    int mock_n;
    size_t len;

    if (n < 0) {
        sign = -1;
        n = n * (-1);
    }
    
    len = 1;
    mock_n = n;
    while (mock_n > 10) {
        mock_n = mock_n / 10;
        len++;
    }
    if (sign == -1) {
        len += 1;
    }
    num = (char *)malloc((len+1) * sizeof(char));

    if (num == NULL) {
        return NULL;
    }
    num [len] = '\0';

    while (len > 0) {
        num[len-1] = (n%10) + 48;
        n = n/10;
        len--;
        if (len == 0 && sign == -1) {
            num[len] = '-';
        }
    }

    return num;
}

void ft_putnbr_fd(int n, int fd) {
    char *n_string;
    
    n_string = ft_itoa(n);
    ft_putstr_fd(n_string, fd);
}