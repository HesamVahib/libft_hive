#include <stdlib.h>

char *ft_strdup(const char *s) {
    size_t s_len;
    char *s_copy;
    int i;

    s_len = 0;
    while (s[s_len++] != '\0');

    s_copy = (char *)malloc(s_len * sizeof(char));
    if (s_copy == NULL) {
        return NULL;
    }

    i = 0;
    while(s[i] != '\0') {
        s_copy[i] = s[i];
        i++;
    }
    s_copy[i] = '\0';

    return s_copy;
}