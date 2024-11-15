#include "libft.h"

int ft_strlen(const char *s) {
    int len = 0;
    while (s[len] != '\0') {
        len++;
    }
    return len;
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char)) {
    if (!s || !f) return NULL;

    size_t len;
    char *substr;
    size_t i;

    len = ft_strlen(s);

    substr = (char *)malloc((len + 1) * sizeof(char));
    if (substr == NULL) return NULL;

    i = 0;
    while (i < len) {
        substr[i] = f(i, s[i]);
        i++;
    }
    substr[len] = '\0';

    return substr;
}