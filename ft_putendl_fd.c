#include <unistd.h>

void ft_putendl_fd(char c, int fd) {
    write (fd, &c, 1);
    write (fd, "\n", 1);
}