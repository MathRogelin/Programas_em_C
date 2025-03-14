#include <stdio.h>

int main(){
    int numero, j, resultado;

    printf("Digite um numero para saber sua tabuada...\n");
    scanf("%d",&numero);

    for ( j = 0 ; j <= 10; j++){
        resultado = j * numero;
        printf("%d x %d = %d\n", numero, j, resultado);
    }
    
    return 0;
}