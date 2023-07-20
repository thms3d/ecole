#include <stdio.h>

char *ft_strncpy(char *dest, const char *src, unsigned int n) {
    char *ptr = dest;

    while (*src != '\0' && n > 0) {
        *dest = *src;
        dest++;
        src++;
        n--;
    }

    while (n > 0) {
        *dest = '\0';
        dest++;
        n--;
    }

    return ptr;
}

int main() {
    char source[] = "Hello, world!";
    char destination[20];

    printf("Avant copie : destination = %s\n", destination);

    ft_strncpy(destination, source, 5);

    printf("Après copie : destination = %s\n", destination);

    return 0;
}
