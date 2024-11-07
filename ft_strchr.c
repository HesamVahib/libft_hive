char *ft_strchr(char *str, char c){    
    int l;

    l = 0;
    while (str[l] != '\0') {
        if (str[l] == c) {
            return &str[l]; 
        }
        l++;
    }
    return 0;
}