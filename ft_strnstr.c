#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len) {
    if (*needle == '\0') {
        return (char *)haystack;
    }

    size_t i;
    size_t n_len;
    size_t j;

    n_len = 0;
    while(needle[n_len] != '\0') {
        n_len++;
    }

    i = 0;
    while (haystack[i] != '\0' && i < len) {
        if (haystack[i] == needle[0] && i + n_len <= len) {
            j = 1;
            while (haystack[i + j] == needle [j] && needle[j] != '\0') {
                j++;
            }
            if (needle [j] == '\0') {
                return (char *)&haystack[i];
            }
            
        }
        i++;
    }

    return NULL;
}