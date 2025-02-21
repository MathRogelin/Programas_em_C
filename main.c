#include <stdio.h>

int main() {
    printf("Ola, Mundo!\n");
    printf("Primeiro programa na linguagem C\n");
    
    char nome[20] = "Matheus"; // Variável para armazenar o nome
    int idade = 18;          // Variável para armazenar a idade

    printf("Meu nome e %s\n", nome); // Usando %s para imprimir strings
    printf("Tenho %d anos\n", idade); // Usando %d para imprimir inteiros

    return 0;
}
