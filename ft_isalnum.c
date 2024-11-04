int ft_isalnum(int c){

    if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')){
        return 1;
    }
    else {
        return 0;
    }
}

#include <stdio.h>
#include <ctype.h>

int main(){
    char c = '  s';

    if (ft_isalnum(c)){
        printf("it is alnum from mine\n");
    }
    else {
        printf("it is NOT from mine\n");
    }
    if (isalnum(c)) {
        printf("it is alnum from MAIN FUNCTION\n");
    }
    else
    {
        printf("it is NOT alnum from MAIN FUNCTION\n");
    }
    
}