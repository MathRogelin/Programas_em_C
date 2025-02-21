#include <stdio.h>
#include <string.h>

int main(){
    printf("Programa Tabuada\n");
    printf("Digite o Numero:\n");
    int numero;
    char tabuada[500];

    scanf("%d", &numero);

    for (int i = 0; i <= 10; i++)
    {
        char linha[50];
        sprintf(linha, "%d x %d = %d\n", numero, i, numero*i); //entrada para string
        strcat(tabuada,linha); //concatena
    }

    printf("\nTabuada:\n%s", tabuada);
    
    return 0;
}