#include <stdio.h>

void ft_swap(int *a, int *b) {
    int temp = *a; // Sauvegarder la valeur de a dans une variable temporaire
    *a = *b; // Copier la valeur de b dans a
    *b = temp; // Copier la valeur sauvegardée (ancienne valeur de a) dans b
}

int main() {
    int num1 = 10;
    int num2 = 20;

    printf("Avant l'échange : num1 = %d, num2 = %d\n", num1, num2);

    ft_swap(&num1, &num2);

    printf("Après l'échange : num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
