#include <stdio.h>

void ft_ft(int *nbr) {
    *nbr = 42;
}

int main() {
    int num = 0;
    printf("Avant d'appeler la fonction, num = %d\n", num);

    ft_ft(&num);

    printf("Après avoir appelé la fonction, num = %d\n", num);

    return 0;
}
