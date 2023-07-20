#include <stdio.h>

void ft_sort_int_tab(int *tab, int size) {
    int temp;

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (tab[j] > tab[j + 1]) {
                // Échanger les éléments si l'élément actuel est plus grand que l'élément suivant
                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }
}

int main() {
    int numbers[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    printf("Avant le tri : ");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }

    ft_sort_int_tab(numbers, size);

    printf("\nAprès le tri : ");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}
