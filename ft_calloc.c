#include "libft.h"

void *ft_calloc(size_t num, size_t size) {
    char *s;
    int len;
    int i;

    len = (num * size);
    s = (char *)malloc(len);

    if (s == NULL) {
        return NULL;
    }

    i = 0;
    while (i < len) {
        s[i] = 0;
        i++;
    }
    
    return (void *)s;
}