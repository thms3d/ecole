#include <stdio.h>
#include <ctype.h>

int ft_str_is_numeric(char *str) {
    while (*str != '\0') {
        if (!isdigit(*str)) {
            return 0; // Si le caractère n'est pas un chiffre, retourner 0
        }
        str++;
    }

    return 1; // Si tous les caractères sont des chiffres ou si la chaîne est vide, retourner 1
}

int main() {
    char str1[] = "123456";
   
    
    printf("Est-ce que \"%s\" contient que des chiffres ? %d\n", str1, ft_str_is_numeric(str1));

    return 0;
}
