#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// srand é uma função que gera um número aleatório, mas diferente de rand (que já começa inicializado com um numero)
// ele precisa de um número para a parti dele gerar um aleatório
        
/*
    A função rand() retorna um número pseudo-aleatório. Isso significa que, apesar de parecer aleatório, os números não são 
    gerados de forma completamente imprevisível. Eles seguem uma sequência definida por um algoritmo determinístico. 
    Ou seja, se você chamar rand() várias vezes sem mudar a semente (seed), você sempre obterá a mesma sequência de números.        
*/

/*
    A sequência de números pseudo-aleatórios gerada por rand() depende de um valor inicial chamado semente (seed)
*/

/*
    A função srand() define a semente para o gerador de números aleatórios, o que fará com que a sequência gerada pelo 
    rand() seja diferente a cada vez que o programa é executado
*/

/*
    Quando você usa time(0) (ou time(NULL), que é equivalente) em C, você está solicitando a hora atual (em segundos) 
    desde o 1º de janeiro de 1970 (o chamado "Epoch"). 
*/

int main(){
    int opcao;
    int numerosecreto, palpite;

    printf("Menu Principal\n");
    printf("1. Iniciar Jogo.\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d",&opcao);

    switch (opcao){
        case 1:
            srand(time(0));
            numerosecreto = rand()%10;

            printf("Digite um numero de 0 a 9: ");
            scanf("%d", &palpite);

            if (numerosecreto == palpite){
                printf("Voce acertou!");
            }else{
                printf("Voce errou!\n");
                printf("O numero era %d", numerosecreto);
            }
                
        break;
    
        case 2:
            printf("As regras sao...\n");
        break;
    
        case 3:
            printf("Saida do jogo\n");
        break;
    
        default:
            printf("Opcao invalida\n");
        break;
    }

    return 0;
}