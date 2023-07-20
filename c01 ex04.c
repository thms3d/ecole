#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b) {
    int temp = *a; // Sauvegarder la valeur pointée par a dans une variable temporaire
    *a = temp / *b; // Calculer la division et stocker le résultat dans la variable pointée par a
    *b = temp % *b; // Calculer le reste de la division et stocker le résultat dans la variable pointée par b
}

int main() {
    int num1 = 17;
    int num2 = 5;

    printf("Avant l'appel de la fonction, num1 = %d, num2 = %d\n", num1, num2);

    ft_ultimate_div_mod(&num1, &num2);

    printf("Après l'appel de la fonction, num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
