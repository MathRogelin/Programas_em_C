#include <stdio.h>

int main(){

    float valor = 0;
    float conta;

    do{
        printf("Digite o valor: ");
        scanf("%f",&conta);
      
        valor += conta;

        if (conta == 0){
            printf("Conta: RS %.2f",valor);
            break;
        }
      
    } while (1);

    return 0;
}