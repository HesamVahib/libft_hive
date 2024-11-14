#include <stdlib.h>

char **ft_split(char const *s, char c) {
    char **arr;
    int word_counter;
    int i, j, z, t;

    i = 0;
    word_counter = 0;
    while(s[i]) {
        if ((s[i] != c) && (i == 0 || s[i-1] == c)) {
            word_counter++;
        }
        i++;
    }

    arr = (char **)malloc((word_counter + 1) * sizeof(char *));

    if (arr == NULL) {
        return NULL;
    }

    i = 0;
    z = 0;
    while (i < word_counter) {
        while (s[z] == c) z++;

        j = 0;
        while (s[z + j] && s[z + j] != c) j++;

        arr[i] = (char *)malloc((j + 1) * sizeof(char));

        if (arr[i] == NULL) {
            t = 0;
            while (t < i) {
                free(arr[t]);
                t++;
            }
            free(arr);
            return NULL;
        }
        t = 0;
        while (t < j) {
            arr[i][t] = s[z];
            z++;
            t++;
        }
        arr[i][t] = '\0';
        i++;

    }
    arr[i] = NULL;

    return arr;
}