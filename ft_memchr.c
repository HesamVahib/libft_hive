#include <stddef.h>

void *ft_memchr(const void *ptr, int value, size_t num) {
    const unsigned char *p = (const unsigned char *)ptr;
    unsigned char val = (unsigned char)value;
    size_t i;

    i = 0;
    while (i < num) {
        if (p[i] == val) {
            return &p[i];
        }
        i++;
    }

    return NULL;

}