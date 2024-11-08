#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n) {
    unsigned char *d = (unsigned char *)dest;
    const unsigned char *s = (const unsigned char *)src;

    while (n > 0) {
        *d++ = *s++;
        n--;
    }
    return dest;
}