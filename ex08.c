#include <unistd.h>

void ft_show_combination(char *combination, int n) {
    write(1, combination, n);
    write(1, ", ", 2); 
}

void ft_generate_combinations(char *combination, int n, int index, int start) {
    if (index == n) {
        ft_show_combination(combination, n);
        return;
    }

    for (int i = start; i <= 9; i++) {
        combination[index] = '0' + i;
        ft_generate_combinations(combination, n, index + 1, i + 1);
    }
}

void ft_print_combn(int n) {
    if (n <= 0 || n > 9) {
        return; 
    }

    char combination[n];
    ft_generate_combinations(combination, n, 0, 0);
}

int main() {
    int n = 3;
    ft_print_combn(n);
    return 0;
}
