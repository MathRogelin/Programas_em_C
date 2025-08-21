#include <stdio.h>
// varianveis constantes
#define LINHA 5
#define COLUNAS 5

int main(){
    int matriz[LINHA][COLUNAS];
    int soma = 0;
    for (int i = 0; i < LINHA; i++){
        for (int j = 0; j < COLUNAS; j++){
            soma++;
            matriz[i][j] = soma;
            printf("%d\t",matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}