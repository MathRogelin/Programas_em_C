#include <stdio.h>

int main(){
    char nome[10];
    float altura;
    int idade;
    char pergunta;

    printf("Qual seu nome:\n");
    scanf("%s", nome);
    printf("Qual sua altura?\n");
    scanf("%f", &altura);
    printf("Qual sua idade:\n");
    scanf("%d", &idade);
    printf("Quem descobriu o Brasil foi Pedro Alvares Cabral?\n");
    scanf(" %c", &pergunta);
    return 0;
}