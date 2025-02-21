#include <stdio.h>

int main(){
    char nome[50];
    char nome2[50];
    printf("Qual é seu nome?\n");
    //Lê a string completa, mas sem verificar limites de tamanho.
    printf("Com gets: Le a string completa, mas sem verificar limites de tamanho.\n");
    gets(nome);
    printf("Seu nome: %s\n", nome);
    //Lê a string completa com limite de tamanho e adiciona \n, que pode ser removido manualmente.
    printf("Com fgets: Le a string completa com limite de tamanho e adiciona '/n', que pode ser removido manualmente.\n");
    fgets(nome2, sizeof(nome2), stdin);

    printf("Ola %s\n", nome2);
    return 0;
}