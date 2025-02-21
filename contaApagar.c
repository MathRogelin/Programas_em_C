#include <stdio.h>

int main(){
    printf("Programa Conta Apagar\n");
    printf("Digite 0 para concluir...\n");
    float valor,total = 0;
    
    do
    {
        printf("Valor:\n");
        scanf("%f", &valor);
        if(valor > 0)
        {
            total += valor;
        }
        
    }while (valor != 0);

    printf("Total: %.2f\n", total);
    

    return 0;
}