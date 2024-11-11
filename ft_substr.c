#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len) {
    char *sub;
    int i;
    int j;

    sub = (char *)malloc((len + 1) * sizeof(char));

    if (sub == NULL) {
        return NULL;
    }

    i = 0;
    while (i < start) {
        s[i++];
    }
   
    j = 0;
    while (j < len) {
     sub[j++] = s[i++];
    }
    sub[j] = '\0';

    return sub;
}