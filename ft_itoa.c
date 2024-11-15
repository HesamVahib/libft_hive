#include "libft.h"

char *ft_itoa(int n) {
    char *num;
    int sign;
    int mock_n;
    size_t len;
    int long_number;
    
    long_number = 0;
    if (n < -2147483647) {
        long_number = 1;
        n += 1;
    }

    if (n < 0) {
        sign = -1;
        n = n * (-1);
    }

    len = 1;
    mock_n = n;

    while (mock_n >= 10) {
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

    if (long_number){

        num[10] = '8';
        n = n/10;
        len--;
    }

    while (len > 0) {
        num[len-1] = (n%10) + 48;
        n = n/10;
        len--;
        if ((len == 0 && sign == -1)) {
            num[0] = '-';
        }
    }

    return num;
}