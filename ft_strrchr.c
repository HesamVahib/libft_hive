#include "libft.h"

char *ft_strrchr(char *str, char c) {    
    if (str == NULL)
        return NULL;
    
    int l;

    l = 0;
    while (str[l] != '\0') {
        l++;
    }

    while (l >= 0) {
        if (str[l] == c) {
            return &str[l]; 
        }
        l--;
    }
    return 0;
}
