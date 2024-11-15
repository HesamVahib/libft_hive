#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, int n) {
    if (n == 0)
        return 0;

    int len;

    len = 0;
    while (((s1[len] != '\0') || (s2[len] != '\0')) && (len+1 < n) && (s1[len] == s2[len])) {
        len++;
    }
    return ((unsigned char)s1[len] - (unsigned char)s2[len]);
}