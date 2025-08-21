#include <stdio.h>   // para printf
#include <stdint.h>  // se quiser usar tipos como int32_t etc.

// Definição da struct fora do main
struct objeto {
    int altura, largura;
    char nome[50];
    struct objeto* objeto2; // pode apontar para outro objeto
};

int main() {
    // Criando um objeto
    struct objeto obj1 = { 180, 75, "Caixa", NULL };

    // Criando outro objeto e ligando
    struct objeto obj2 = { 200, 100, "Armario", NULL };
    obj1.objeto2 = &obj2; // obj1 -> obj2

    // Imprimindo
    printf("Objeto 1: %s (%dx%d)\n", obj1.nome, obj1.altura, obj1.largura);
    printf("Objeto 2: %s (%dx%d)\n", obj1.objeto2->nome, obj1.objeto2->altura, obj1.objeto2->largura);

    return 0;
}
