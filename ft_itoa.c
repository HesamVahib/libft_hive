#include <stdlib.h>

char *ft_itoa(int n) {
    char *num;
    int sign;
    int mock_n;
    size_t len;
    size_t i;

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
