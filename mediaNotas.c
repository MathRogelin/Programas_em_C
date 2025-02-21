#include <stdio.h>

int main(){
    printf("Programa Media das Notas\n");

    int nota1,nota2,nota3, mediaNotas, media;

    printf("Primeira Nota:");
    scanf("%d", &nota1);

    printf("Segunda Nota:");
    scanf("%d", &nota2);

    printf("Terceira Nota:");
    scanf("%d", &nota3);

    printf("Media da sua escola:");
    scanf("%d", &media);

    mediaNotas = (nota1 + nota2 + nota3)/3;

    if (mediaNotas >= media){
        printf("Voce passou!!!\n");
        printf("Sua media foi: %d\n",mediaNotas);
    }else{
        printf("Voce reprovou!!!\n");
        printf("Sua media foi: %d\n",mediaNotas);
    };
    
    return 0;
}