#include <stdio.h>

int main(){
    // init serve para iniciar um variavel que guarda números inteiros
    int idade = 18;
    // char é uma array (não existe uma string que nem no js, mas uma lista de caracteres)
    // entre as [] defini a quantidade de letras
    char nome[20] = "Matheus";
    // float é uma variável que guarda um valor com ponto flutuante (númro quebrado, número com virgula)
    // é possível ver as casas decimais com %.(numero)lf ( no máximo entre 6 - 7)
    float altura = 1.7;
    // ele é a mesma coisa que o float, mas mas específico
    // é possível ver as casas decimais com %.(numero)lf ( no máximo entre 10 - 15)
    double peso = 59.500;

    printf("Nome:%s, idade: %d, altura:%.2f, Peso: %.3lf", nome, idade, altura, peso);
}