#include <stdio.h>

#define TAMANHO 10

// Função para exibir o tabuleiro
void exibirTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
    char letras[10] = {'A','B','C','D','E','F','G','H','I','J'};
    
    printf("\n\t");
    for (int a = 0; a < 10; a++){
        printf("%c\t", letras[a]);
    }
    printf("\n\n");

    for (int i = 0; i < TAMANHO; i++){
        printf("%d\t", i + 1);
        for (int j = 0; j < TAMANHO; j++){
            printf("%d\t", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

// Função para aplicar a habilidade no tabuleiro
void aplicarHabilidade(int tabuleiro[TAMANHO][TAMANHO], int matriz[5][5], int x, int y) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int linha = x + i - 2; // Ajusta para centralizar
            int coluna = y + j - 2;

            if (linha >= 0 && linha < TAMANHO && coluna >= 0 && coluna < TAMANHO) {
                if (matriz[i][j] == 1) {
                    tabuleiro[linha][coluna] = 5; // Marca a área afetada
                }
            }
        }
    }
}

// Matriz de efeito: Cone
void habilidadeCone(int tabuleiro[TAMANHO][TAMANHO], int x, int y) {
    int cone[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}
    };
    aplicarHabilidade(tabuleiro, cone, x, y);
}

// Matriz de efeito: Cruz
void habilidadeCruz(int tabuleiro[TAMANHO][TAMANHO], int x, int y) {
    int cruz[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0}
    };
    aplicarHabilidade(tabuleiro, cruz, x, y);
}

// Matriz de efeito: Octaedro
void habilidadeOctaedro(int tabuleiro[TAMANHO][TAMANHO], int x, int y) {
    int octaedro[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}
    };
    aplicarHabilidade(tabuleiro, octaedro, x, y);
}

int main() {
    // Criando o tabuleiro
    int tabuleiro[TAMANHO][TAMANHO] = {0};

    // Posicionando alguns navios
    for (int y = 3; y < 6; y++){
        tabuleiro[y][3] = 3;
        tabuleiro[1][y] = 3;
        tabuleiro[y][y + 4] = 3;
        tabuleiro[y][9 - y] = 3;
    }

    printf("Batalha Naval - Habilidades Especiais\n");
    printf("=============================================\n");

    // Exibir tabuleiro inicial
    exibirTabuleiro(tabuleiro);

    // Aplicar habilidades
    habilidadeCone(tabuleiro, 5, 5);
    habilidadeCruz(tabuleiro, 3, 3);
    habilidadeOctaedro(tabuleiro, 7, 7);

    // Exibir tabuleiro atualizado
    printf("\nTabuleiro com habilidades aplicadas:\n");
    exibirTabuleiro(tabuleiro);

    return 0;
}
