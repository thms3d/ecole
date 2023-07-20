#include <stdio.h>

int ft_strlen(char *str) {
    int count = 0;

    // Parcourir la chaîne jusqu'à atteindre le caractère nul '\0'
    while (*str != '\0') {
        count++;
        str++;
    }

    return count;
}

int main() {
    char message[] = "j'aime coder!";

    int length = ft_strlen(message);

    printf("La longueur de la chaîne est : %d\n", length);

    return 0;
}
