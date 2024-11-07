int ft_atoi(const char *str) {
    int i;
    int sign;
    int num;

    i = 0;
    while ((str[i] >= 9 && str[i] < 13) || str[i] == 32) {
        i++;
    }

    sign = 1;
    while (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-') {
            sign = sign * (-1);
        }
        i++;
    }

    num = 0;
    while (str[i] >= '0' && str[i] <= '9') {
        num = (num * 10) + (str[i] - '0');
        i++;
    }
    if (num == -2147483647 || num == -2147483648) {
            if (sign == -1) {
                return (-2147483648);
            }
            else {
                return (2147483647);
            }
        }
    else {
        return (num * sign);
    }
}

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Test cases for edge cases
    printf("Result (\"   1234\"): %d\n", ft_atoi("   1234"));           // Leading spaces
    printf("Result (\"-1234\"): %d\n", ft_atoi("-1234"));               // Negative number
    printf("Result (\"1234abc\"): %d\n", ft_atoi("1234abc"));           // Non-digit after number
    printf("Result (\"2147483648\"): %d\n", ft_atoi("2147483648"));     // Overflow (greater than INT_MAX)
    printf("Result (\"2147483649\"): %d\n", ft_atoi("-2147483649"));   // Underflow (less than INT_MIN)
    printf("Result (\"\"): %d\n", ft_atoi(""));                         // Empty string
    printf("Result (\"abc\"): %d\n", ft_atoi("abc"));                   // No digits
    printf("Result (\"+\"): %d\n", ft_atoi("+"));                       // Only sign

    return 0;
}