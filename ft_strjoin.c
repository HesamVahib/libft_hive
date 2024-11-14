#include <stdlib.h>
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2) {
    char *dest;
    size_t s1_len;
    size_t s2_len;

    s1_len = 0;
    s2_len = 0;
    while (s1[s1_len++]);
    while (s2[s2_len++]);

    dest = (char *)malloc((s1_len + s2_len) * sizeof(char));

    if (dest == NULL) {
        return NULL;
    }

    ft_strlcpy(dest, s1, s1_len);
    ft_strlcat(dest, s2, s2_len);
    
    return dest;
}