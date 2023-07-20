#include <stdio.h>
#include <ctype.h>

int ft_str_is_lowercase(char *str) {
    while (*str != '\0') {
        if (!islower(*str)) {
            return 0; // Si le caractère n'est pas une minuscule, retourner 0
        }
        str++;
    }

    return 1; // Si tous les caractères sont des minuscules ou si la chaîne est vide, retourner 1
}

int main() {
    char str1[] = "hello";
    
    
    printf("Est-ce que \"%s\" contient que des minuscules ? %d\n", str1, ft_str_is_lowercase(str1));
   

    return 0;
}
