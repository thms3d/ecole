#include <stdio.h>

char *ft_strcpy(char *dest, const char *src) {
    char *ptr = dest;

    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0'; // Ajouter le caractère nul à la fin de la chaîne de destination

    return ptr;
}

int main() {
    char source[] = "Hello, world!";
    char destination[20];

    printf("Avant copie : destination = %s\n", destination);

    ft_strcpy(destination, source);

    printf("Après copie : destination = %s\n", destination);

    return 0;
}
