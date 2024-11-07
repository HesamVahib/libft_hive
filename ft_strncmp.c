#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, int n) {
    int len;
    int sub;

    len = 0;
    sub = 0;
    while ((s1[len] != '\0') && (s2[len] != '\0') && (len < n)) {
        sub = sub + (s2[len] - s1[len]);
        len++;
    }
    return sub;

}