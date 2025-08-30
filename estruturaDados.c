#include <stdio.h>

// se declara fora um struct, não dentro da função principal (main)
typedef struct{
    char Nome[50];
    int Idade;
    float Nota;
} Aluno;

// inicia o programa
int main(){
    // cria uma cópia e recebe valores (em ordem)
    Aluno aluno1 = {"Joao", 16, 9.5};
    // mensagem
    printf("Nome: %s\n", aluno1.Nome);
    printf("Idade: %d\n", aluno1.Idade);
    printf("Nota: %.1f\n", aluno1.Nota);

    return 0;
}