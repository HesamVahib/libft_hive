#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t size) {
    size_t i;
    size_t j;

    i = 0;
    while (src[i] != '\0') {
        i++;
    }
    if (size != 0) {
        j = 0;
        while (src[j] != '\0' && j < size - 1) {
            dest[j] = src[j];
            j++;
        }
        dest[j] = '\0';
    }
    return (i);
}
