int ft_strncmp(const char *s1, const char *s2, int n) {
    int len;
    int sub;

    len = 0;
    sub = 0;
    while ((s1[len] != '\0') && (s2[len] != '\0') && (len < n)) {
        sub = sub + (s2[len] - s1[len]);
        len++;
    }
    return sub;

}

#include <stdio.h>
#include <string.h>

int main() {
    const char *str1 = "HelloWorld!";
    const char *str2 = "Hello, everyone!";
    
    int result = ft_strncmp(str1, str2, 7); // Compare the first 7 characters

    if (result == 0) {
        printf("The first 7 characters of both strings are equal.\n");
    } else if (result < 0) {
        printf("The first string is less than the second string.\n");
    } else {
        printf("The first string is greater than the second string.\n");
    }

    return 0;
}