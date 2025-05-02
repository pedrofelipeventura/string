#include <stdio.h>
#define TAM 50

int main() {
    char str[TAM], str2[TAM];

    puts("Digite a string 1:\n");
    fgets(str, TAM, stdin);

    puts("Digite a string 2:\n");
    fgets(str2, TAM, stdin);

    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    if (str[i - 1] == '\n') {
        str[i - 1] = '\0';  
    }

    int j = 0;
    while (str2[j] != '\0') {
        j++;
    }
    if (str2[j - 1] == '\n') {
        str2[j - 1] = '\0'; 
    }

    i = 0;
    while (str[i] != '\0') {
        i++;
    }

    int k = 0;
    while (str2[k] != '\0') {
        str[i] = str2[k];
        i++;
        k++;
    }

    str[i] = '\0'; 

    printf("Resultado da concatenação: %s\n", str);

    return 0;
}
