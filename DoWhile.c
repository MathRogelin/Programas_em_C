#include <stdio.h>

int main(){
    int numero;
    do
    {
        printf("Digite um numero par para sair do programa...\n");
        scanf("%d", &numero);

        if (numero % 2 == 0){
            printf("Esse numero e par\n");
        }else{
            printf("Esse numero e impar\n");
        }
        
    } while (numero % 2 != 0);
    printf("Terminando programa...\n");
    return 0;
}