#include <stddef.h>

void ft_bzero(void *str, size_t n) {
    char *s = str;

    while (n--) {
        *s++ = 0;
    }
}