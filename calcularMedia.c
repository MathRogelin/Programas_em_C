#include <stdio.h>

int main(){
    int nota1,nota2,nota3;
    float media;

    printf("*****Programa Calculo de Media*****\n");

    printf("Nota 1: ");
    scanf("%d",&nota1);

    printf("Nota 2: ");
    scanf("%d",&nota2);

    printf("Nota 3: ");
    scanf("%d",&nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("Media: %.2f", media);

    return 0;
}