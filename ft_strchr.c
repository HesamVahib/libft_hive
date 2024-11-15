#include "libft.h"

char *ft_strchr(char *str, char c) {
    size_t l;

    l = 0;
    while (str[l] != '\0') {
        if (str[l] == c) {
            return &str[l]; 
        }
        l++;
    }
    if (c == '\0')
        return &str[l];
        
    return 0;
}