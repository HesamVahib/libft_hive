#include <stdlib.h>

char **ft_split(char const *s, char c) {
    char **arr;
    size_t len;
    int delim;
    int i;
    int j;
    int z;

    len = 0;
    delim = 0;
    while(s[len]) {
        if (s[len] == c) {
            delim++;
        }
        len++;
    }
    printf("size of len is %i and delim is %i\n", len, delim);

    arr = (char **)malloc((len-delim+1) * sizeof(char*));

    if (arr == NULL) {
        return NULL;
    }

    printf("size is %i\n", sizeof(arr));
}

int main() {
    char s[] = "hesam vahib antene";
    char delimitier = ' ';
    ft_split(s, delimitier);
    // char *str = "Hello world this is ft_split";
    // char delimiter = ' ';
    // char **result = ft_split(str, delimiter);

    // if (!result) {
    //     printf("Memory allocation failed.\n");
    //     return 1;
    // }

    // printf("Original string: \"%s\"\n", str);
    // printf("Split by delimiter '%c':\n", delimiter);

    // int i = 0;
    // while (result[i]) {
    //     printf("result[%d] = \"%s\"\n", i, result[i]);
    //     free(result[i]);  // Free each individual string
    //     i++;
    // }
    // free(result);  // Free the array of pointers

    // return 0;
}


