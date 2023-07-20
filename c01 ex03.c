#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod) {
    *div = a / b;
    *mod = a % b;
}

int main() {
    int num1 = 17;
    int num2 = 5;
    int division, remainder;

    ft_div_mod(num1, num2, &division, &remainder);

    printf("La division de %d par %d est égale à %d\n", num1, num2, division);
    printf("Le reste de la division de %d par %d est égal à %d\n", num1, num2, remainder);

    return 0;
}
