#include <stdio.h>

void ft_putstr(char *str) {
    while (*str != '\0') {
        putchar(*str);
        str++;
    }
}

int main() {
    char message[] = "hello world !";

    ft_putstr(message);

    return 0;
}
