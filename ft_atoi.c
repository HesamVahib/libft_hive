int ft_atoi(const char *str) {
    int i;
    int sign;
    int num;
    int dig;

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
        dig = (str[i] - '0');

        if (num * 10 > 2147483647 - dig) {
            if (sign == -1) {
                return (2147483647);
            }
            else {
                return (-2147483648);
            }
        }
        num = (num * 10) + dig;
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