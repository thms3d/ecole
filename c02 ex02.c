#include <stdio.h>
#include <ctype.h>

int ft_str_is_alpha(char *str) {
    while (*str != '\0') {
        if (!isalpha(*str)) {
            return 0; // Si le caractère n'est pas alphabétique, retourner 0
        }
        str++;
    }

    return 1; // Si tous les caractères sont alphabétiques ou si la chaîne est vide, retourner 1
}

int main() {
    char str1[] = "code6";
   
    
    printf("Est-ce que \"%s\" contient que des caractères alphabétiques ? %d\n", str1, ft_str_is_alpha(str1));
    
    return 0;
}
