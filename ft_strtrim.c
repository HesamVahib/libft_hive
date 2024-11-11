#include <stdlib.h>

int isset(char c, const char *set) {
    while (*set) {
        if (c == *set) {
            return 1;
        }
        set++;
    }
    return 0;
}

int ft_strlen(const char *s) {
    int len = 0;
    while (s[len] != '\0') {
        len++;
    }
    return len;
}

char *ft_strtrim(char const *s1, char const *set) {
    if (s1 == NULL) {
        return NULL;
    }

    char *res;
    char const *end;
    size_t len;
    size_t i;

    while (*s1 && isset(*s1, set)) {
        s1++;
    }
    len = ft_strlen(s1);
    while (isset(s1[len-1], set)){
        len--;
    }
    res = (char *)malloc((len+1) * sizeof(char));

    if (res == NULL) {
        return NULL;
    }

    i = 0;
    while (i < len) {
        res[i] = s1[i];
        i++;
    }
    res[i] = '\0';
    return res;
}