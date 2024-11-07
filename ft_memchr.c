#include "libft.h"

const void *ft_memchr(const void *ptr, int value, size_t num) {
    const unsigned char *p = (const unsigned char *)ptr;
    unsigned char val = (unsigned char)value;

    while (num--) {
        if (*p == val) {
            return (const void *)p;
        }
        p++;
    }

    return NULL;

}