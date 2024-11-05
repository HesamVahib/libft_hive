#include <stddef.h>

void *ft_memset(void *ptr, int value, size_t num) {
    unsigned char *p = (unsigned char *)ptr;
    unsigned char c = (unsigned char)value;
 
    while (num > 0) {
        *p++ = c;
        num--;
    }
    return ptr;
}