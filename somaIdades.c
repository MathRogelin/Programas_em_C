#include <stdio.h>

int main() {
    int idade1,idade2,soma;

    printf("Soma idades\n");

    printf("Primeira idade:");
    scanf("%d", &idade1);
    
    printf("Segunda idade:");
    scanf("%d", &idade2);

    soma = idade1 + idade2;

    printf("A soma das idades de %d e %d é: %d", idade1, idade2, soma);

    return 0;
}